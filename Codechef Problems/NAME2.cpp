#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
  string one, two;
  cin >> one >> two;
  if(one == two){
    cout << "YES\n";
  }
  else if(one.size() > two.size()){

  }
  else if(one.size() < two.size()){

  }
  else{
    cout << "NO\n";
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
  while(t--)
  solve();
}