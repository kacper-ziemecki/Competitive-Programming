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
  for(int i = 0; i < n/2; i++){
    cout << list[i] << " " << list[i + (n+1)/2] << " ";
  }
  if(n&1){
    cout << list[n/2];
  }
  cout << endl;
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