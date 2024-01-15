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
  for (auto& el : list) cin >> el;
  for (ll i = 2; i < n; i += 2) {
    if ((list[i] % 2) != (list[i - 2] % 2)) {
      cout << "NO\n";
      return;
    }
  }
  for (ll i = 3; i < n; i += 2) {
    if ((list[i] % 2) != (list[i - 2] % 2)) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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