#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  if (n & 1)
  {
    cout << -1 << endl;
    return;
  }
  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }
  for (int i = 1; i <= n; i++)
  {
    if (i & 1)
    {
      cout << i + 1 << " ";
    }
    else
    {
      cout << i - 1 << " ";
    }
  }
  cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}