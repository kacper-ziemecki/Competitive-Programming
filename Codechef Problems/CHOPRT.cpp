#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve(){
  int a,b;
  cin >> a >> b;
  if(a > b) cout << ">\n";
  if(a < b) cout << "<\n";
  if(a == b) cout << "=\n";
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