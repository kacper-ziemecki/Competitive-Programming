#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll n;
  cin >> n;
  vector<ll> list(12, 0);
  for (auto& el : list) cin >> el;
  sort(list.rbegin(), list.rend());
  ll suma = 0;
  for (ll i = 0; i < 12; i++) {
    if (suma >= n) {
      cout << i << endl;
      return;
    }
    suma += list[i];
  }
  if (suma >= n) {
    cout << 12 << endl;
  }
  else {
    cout << -1 << endl;
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

  solve();
}