#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  int a,b,temp,sum=0;
  cin >> a >> b;
  for(int i = 0; i < a; i++){
    cin >> temp;
    sum += temp;
  }
  if(sum <= b){
    cout << "Yes\n";
  }
  else{
    cout << "No\n";
  }
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