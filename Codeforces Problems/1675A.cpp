#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  if (x > a) {
    c -= x - a;
    a = 0;
  }
  if (y > b) {
    c -= y - b;
    b = 0;
  }
  if (c >= 0) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
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