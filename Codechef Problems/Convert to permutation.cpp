#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  int n;
  cin >> n;
  vector<int> list(n, 0);
  for(auto &el : list) cin >> el;
  sort(list.begin(), list.end());
  int suma = 0;
  for(int i = 0; i < n; i++){
    if(list[i] > i+1){
      cout << -1 << endl;
      return;
    }
    suma += (i+1) - list[i];
  }
  cout << suma << endl;
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