#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  string text;
  cin >> text;
  ll first = 0, last = 0;
  for (ll i = 0; i < text.size(); i++) {
    if (text[i] == '1') {
      first = i;
      break;
    }
  }
  for (ll i = text.size() - 1; i >= 0; i--) {
    if (text[i] == '1') {
      last = i;
      break;
    }
  }
  ll res = 0;
  for (ll i = first + 1; i < last; i++) {
    if (text[i] == '0') res++;
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

  ll t;
  cin >> t;
  while (t--) solve();

}