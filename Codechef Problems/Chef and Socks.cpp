#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  int a,b,c;
  cin >> a >> b >> c;
  c -= a;
  cout << ((c/b)&1 ? "Unlucky Chef\n" : "Lucky Chef\n");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 // freopen("input.txt", "r", stdin);
  solve();
}