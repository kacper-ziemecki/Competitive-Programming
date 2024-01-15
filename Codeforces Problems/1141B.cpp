#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll n;
  cin >> n;
  vector<ll> list(n, 0);
  for(auto &el : list) cin >> el;
  for(ll i = 0; i < n; i++){
    list.push_back(list[i]);
  }
  ll res = 0;
  ll temp = 0;
  for(auto el : list) {
    if(el == 1){
      temp++;
    }
    else{
      temp = 0;
    }
    res = max(res, temp);
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