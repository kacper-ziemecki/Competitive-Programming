#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool comp(pair<char, char> one, pair<char, char> two){
  ll a = (one.first - '0') + (one.second - '0');
  ll b = (two.first - '0') + (two.second - '0');
  return a == b;
}

void solve()
{
  ll n;
  string s,res(1, '1');
  cin >> n >> s;
  for(ll i = 1; i < n; i++){
    if(comp({res[i-1], s[i-1]}, {'1', s[i]})){
      res += '0';
    } else res += '1';
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