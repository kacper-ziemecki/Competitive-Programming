#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll e;
  cin >> e;
  set<ll> zbior;
  ll a,b;
  for(ll i = 0; i < e; i++){
    cin >> a >> b;
    zbior.emplace(a);
    zbior.emplace(b);
    // cout << zbior.size() << endl;
  }
  cout << zbior.size() << endl;
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
  while(t--)
  solve();
}