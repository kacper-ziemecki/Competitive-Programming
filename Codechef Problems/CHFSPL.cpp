#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve(){
  int a,b,c;
  cin >> a >> b >> c;
  int maks = a+b;
  maks = max(maks, a+c);
  maks = max(maks, b+c);
  cout << maks << endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  //freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while(t--) solve();
}