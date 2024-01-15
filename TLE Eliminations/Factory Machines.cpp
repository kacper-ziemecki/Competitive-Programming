#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


bool compute(ull m, ull t, vector<ull> list){
  ull res = 0;
  for(auto el : list){
    res += m/el;
    if(res >= t) return true;
  }
  return false;
}

void solve()
{
  ull n,t;
  cin >> n >> t;
  vector<ull> list(n, 0ll);
  for(auto &el : list) cin >> el;
  ll l = 0, r = 1e18;
  while(l < r){
    ull m = (l+r)/2;
    if(compute(m, t, list)){
      r = m;
    } else{
      l = m+1;
    }
  }
  cout << r << endl;
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

  solve();
  
} 