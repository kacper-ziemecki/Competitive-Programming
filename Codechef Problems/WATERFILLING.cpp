#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

void solve()
{
  ll a,b,c;
  cin >> a >> b >> c;
  if(a+b+c <= 1){
    cout << "Water filling time\n";
  }
  else{
    cout << "Not now\n";
  }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  
  ll t;
  cin >> t;
  while(t--) solve();
}