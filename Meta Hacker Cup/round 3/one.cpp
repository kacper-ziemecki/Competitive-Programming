#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


vector<ll> dfs(ll i, ll j, vector<string>& list, map<pair<ll, ll>, bool>& vis, ll& temp) {
  if (i < 0 || i >= list.size() || j < 0 || j >= list[0].size()) return { 0, 0, 0, 0 };
  if (list[i][j] == 'B' || list[i][j] == 'X' || vis[{i, j}]) return { 0, 0, 0, 0 };
  if (list[i][j] == '.') {
    vis[{i, j}] = true;
    return { 1, i, j, 0 };
  }
  list[i][j] = 'X';
  temp++;
  vector<int> r = { -1, 0, 1, 0 }, c = { 0, -1, 0, 1 };
  vector<ll> res = { 0, 0, 0, 1 };
  for (ll x = 0; x < 4; x++) {
    vector<ll> tmp = dfs(i + r[x], j + c[x], list, vis, temp);
    if (tmp[0] != 0) {
      res[0] += tmp[0];
      res[1] = tmp[1];
      res[2] = tmp[2];
      res[3] += tmp[3];
    }
    else {
      res[3] += tmp[3];
    }
  }
  return res;
}

void solve()
{
  ll r, c, result = 0;
  cin >> r >> c;
  vector<string> list(r, " ");
  map<pair<ll, ll>, ll> mapa;
  for (auto& el : list) cin >> el;
  for (ll i = 0; i < r; i++) {
    for (ll j = 0; j < c; j++) {
      // vector<vector<bool>> vis(r, vector<bool>(c, false));
      map<pair<ll, ll>, bool> vis;
      ll temp = 0;
      if (list[i][j] == 'W') {
        vector<ll> wynik = dfs(i, j, list, vis, temp);
        if (wynik[0] <= 1) {
          mapa[make_pair(wynik[1], wynik[2])] += wynik[3];
        }
      }
    }
  }
  for (auto el : mapa) {
    result = max(result, el.second);
  }
  cout << result << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }

}