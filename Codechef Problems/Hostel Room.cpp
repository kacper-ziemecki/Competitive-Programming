#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  int a,b;
  cin >> a >> b;
  int temp;
  int maks = b;
  for(int i = 0; i < a; i++){
    cin >> temp;
    b += temp;
    maks = max(maks, b);
  }
  cout << maks << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while(t--) solve();
}