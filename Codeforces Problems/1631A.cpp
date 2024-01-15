#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll n;
  cin >> n;
  vector<ll> one(n, 0), two(n, 0);
  for (auto& el : one) cin >> el;
  for (auto& el : two) cin >> el;
  ll first = 0, second = 0;
  for (ll i = 0; i < n; i++) {
    first = max(first, max(one[i], two[i]));
    second = max(second, min(one[i], two[i]));
  }
  cout << first * second << endl;
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