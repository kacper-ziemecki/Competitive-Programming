#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll n;
  cin >> n;
  ll one = 0, two = 0;
  ll temp;
  for (ll i = 0; i < n; i++) {
    cin >> temp;
    if (temp & 1) two++;
    else one++;
  }
  cout << min(one, two) << endl;
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
  while (t--) solve();
}