#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll ab(ll n){
  if(n < 0) return -n;
  return n;
}

void solve()
{
  ll n,m,k,h,dif,res=0;
  cin >> n >> m >> k >> h;
  vector<ll> list(n, 0ll);
  for(auto &el : list) cin >> el;
  for(auto el : list){
    dif = ab(h - el);
    if(dif % k == 0 && dif < m*k && dif != 0) res++;
  }
  cout << res << endl;
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