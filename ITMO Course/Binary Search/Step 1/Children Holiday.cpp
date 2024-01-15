#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll m,n;
vector<vector<ll>> list;

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
#endif

  cin >> m >> n;
  list.resize(n, vector<ll>(3, 0));
  ll a;
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < 3; j++){
      cin >> a;
      list[i][j] = a;
    }
  }
  
}