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
  ll n,m;
  cin >> n >> m;
  string s,t;
  cin >> s >> t;
  bool flag = true;
  for(ll i = 1; i < m; i++){
    if(t[i-1] == t[i]) flag = false;
  }
  for(ll i = 1; i < n; i++){
    if(s[i-1] == s[i] && (!flag || (flag && (t[0] == s[i-1] || t[m-1] == s[i])))){
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
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