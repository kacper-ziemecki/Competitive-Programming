#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
  string one, two;
  cin >> one >> two;
  ll cnt = 0;
  for(auto el : one) if(el == '1') cnt++;
  for(auto el : two) if(el == '1') cnt++;
  cnt -= (cnt > one.size() ? 2*(cnt - one.size()) : 0);
  for(ll i = 0; i < cnt; i++){
    cout << '1';
  }
  for(ll i = 0; i < (one.size()-cnt); i++){
    cout << '0';
  }
  cout << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  
  ll t;
  cin >> t;
  while(t--) solve();
}