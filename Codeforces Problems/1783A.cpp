#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
  ll n;
  cin >> n;
  vector<ll> l(n, 0ll);
  for(auto &el : l) cin >> el;
  sort(l.begin(), l.end());
  if(l.front() != l.back()){
    cout << "YES\n";
    cout << l.back() << " " << l.front() << " ";
    for(ll i = 1; i < n-1; i++){
      cout << l[i] << " ";
    }
    cout << endl;
  } else{
    cout << "NO\n";
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