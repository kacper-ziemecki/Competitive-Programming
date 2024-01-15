#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve()
{
  ll n;
  cin >> n;
  vector<ll> list(n, 0ll), prefix(n, 0ll), suffix(n, 0ll);
  for(auto &el : list) cin >> el;
  prefix[0] = list[0];  
  suffix[n-1] = list[n-1];
  for(ll i = 1; i < n; i++){
    prefix[i] = max(prefix[i-1], list[i]);
    suffix[n-i-1] = min(suffix[n-i], list[n-i-1]);
    // cout << prefix[i] << " " << suffix[n-i-1] << endl;
  }
  ll res = INT_MAX;
  for(ll i = 0; i < n-1; i++){
    res = min(res, max(0ll, suffix[i+1] - prefix[i] + 1ll));
  }
  cout << (res+1)/2 << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../in.in", "r", stdin);
  freopen("../out.out", "w", stdout);
#endif

  ll t;
  cin >> t;
  while(t--)
  solve();
  
}