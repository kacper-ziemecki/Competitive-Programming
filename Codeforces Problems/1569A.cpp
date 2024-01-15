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
  string s;
  cin >> s;
  for(ll i = 1; i < n; i++){
    if(s[i] == 'a' && s[i-1] == 'b'){
      cout << i << " " << i+1 << endl;
      return;
    } 
    if(s[i] == 'b' && s[i-1] == 'a'){
      cout << i << " " << i+1 << endl;
      return;
    } 
  }
  cout << "-1 -1\n";
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