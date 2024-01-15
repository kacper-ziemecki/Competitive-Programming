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
  ll n,res=0;
  cin >> n;
  vector<ll> list(2*n, 0ll);
  for(auto &el : list) cin >> el;
  sort(list.begin(), list.end());
  for(ll i = 0; i+1 < 2*n; i++){
    if(i == n-1) continue;
    res += abs(list[i] - list[i+1]);
  }
  cout << res << endl;
  for(ll i = 0; i < n; i++){
    cout << list[i] << " " << list[n+i] << endl;
  }
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