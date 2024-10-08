#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
  ll n;
  cin >> n;
  vector<string> list(n, " ");
  for(auto &el : list) cin >> el;
  ll res = 0;
  for(ll i = 0; i < 7; i++){
    ll cnt = 0;
    for(auto el : list){
      if(el[i] == '1') cnt++;
    }
    res = max(res, cnt);
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

  solve();
}