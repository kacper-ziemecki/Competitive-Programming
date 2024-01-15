#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll helper(string &text, vector<ll> &list, ll i, ll last, vector<vector<ll>> &dp){
  if(i <= 0) return 0;
  if(dp[i][last] != -1) return dp[i][last];
  ll res = 0;
  auto it = lower_bound(list.begin(), list.end(), i);
  ll index = (it != list.end() ? it - list.begin() : -1);
  if(index != -1 && list[index] < last){
    res += 1 + helper(text, list, i-1, i, dp);
    res += helper(text, list, i-1, last, dp);
  } else{
      res += helper(text, list, i-1, last, dp);
  }
  return dp[i][last] = res;
}

void solve()
{
  string text;
  cin >> text;
  ll n = text.size();
  vector<ll> list;
  vector<vector<ll>> dp(n, vector<ll>(n+1, -1));
  for(ll i = 0; i < n; i++){
    if(text[i] == 'a' || text[i] == 'e' || text[i] == 'y' || text[i] == 'o' || text[i] == 'i' || text[i] == 'e' || text[i] == 'u'){
      list.push_back(i);
    }
  }
  cout << helper(text, list, n-1, n, dp) << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
#endif

  solve();
  
}