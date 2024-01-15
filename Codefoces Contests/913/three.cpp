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
  string s;
  cin >> s;
  map<char, ll> mapa;
  for(auto el : s){
    mapa[el]++;
  }
  ll res = 0;
  for(auto el : mapa){
    res = max(res, el.second);
  }
  res = res - (n - res);
  if(s.size()&1) res = max(res, 1ll);
  res = max(res, 0ll);
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
 
  ll t;
  cin >> t;
  while(t--)
  solve();
}