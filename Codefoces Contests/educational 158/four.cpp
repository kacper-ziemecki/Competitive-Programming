#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
  ll n;
  cin >> n;
  vector<ll> list(n, 0ll), suffix(n, 0ll);
  for(auto &el : list) cin >> el;
  suffix[n-1] = list[n-1] + n - 1;
  for(ll i = n-2; i >= 0; i--){
    suffix[i] = max(suffix[i+1], list[i] + i);
  }
  ll prefix = 0;
  ll res = INT_MAX;
  for(ll i = 0; i < n; i++){
    res = min(res, max({prefix, list[i], (i+1 < n ? suffix[i+1] : 0)}));
    prefix = max(prefix, list[i]+n-(i+1));
  }
  cout << res << endl;
}
int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../in.in", "r", stdin);
  freopen("../../out.out", "w", stdout);
#endif

  solve();
}