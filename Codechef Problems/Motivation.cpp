#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  ll a,b,e=0,;
  cin >> a >> b;
  ll c,d;
  for(int i = 0; i < a; i++){
    cin >> c >> d;
    if(c <= b){
      e = max(e, d);
    }
  }
  cout << e << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("input.txt", "r", stdin);
  ll t;
  cin >> t;
  while(t--) solve();
}