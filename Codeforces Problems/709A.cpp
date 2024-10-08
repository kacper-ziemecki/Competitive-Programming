#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll n, b, d;
  cin >> n >> b >> d;
  vector<ll> list(n, 0);
  for (auto& el : list) cin >> el;
  ll suma = 0;
  ll res = 0;
  for (auto el : list) {
    if (el <= b) suma += el;
    if (suma > d) {
      res++;
      suma = 0;
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

  solve();
}