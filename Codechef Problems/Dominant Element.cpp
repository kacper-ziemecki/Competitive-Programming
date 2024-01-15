#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

void solve()
{
  int n;
  cin >> n;
  unordered_map<int, int> list;
  int temp;
  int maks1 = 0, maks2 = 0;
  for(int i = 0; i < n; i++){
    cin >> temp;
    list[temp]++;
    if(list[temp] >= maks1){
      maks2 = maks1;
      maks1 = list[temp];
    }
    if(list[temp] > maks2 && list[temp] < maks1){
      maks2 = list[temp];
    }
  }
  if(maks1 > maks2){
    cout << "YES\n";
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
  //freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while(t--) solve();
}