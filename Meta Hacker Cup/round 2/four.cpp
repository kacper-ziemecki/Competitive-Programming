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
  ll n,q;
  string text;
  cin >> n >> text >> q;
  vector<ll> list(q, 0);
  for(auto &el : list) cin >> el;
  for(auto el : list){
    for(ll i = el; i <= n; i+=el){
      if(text[i-1] == '0') text[i-1] = '1';
      else text[i-1] = '0';
    }
  }
  ll res = 0;
  for(ll i = 1; i <= n; i++){
    if(text[i-1] == '1'){
      res++;
      for(ll j = i; j <= n; j+=i){
        if(text[j-1] == '0') text[j-1] = '1';
        else text[j-1] = '0';
      }
    }
  }
  cout << res << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  ll t;
  cin >> t;
  for(ll i = 1; i <= t; i++){
    cout << "Case #" << i << ": ";
    solve();
  }
}