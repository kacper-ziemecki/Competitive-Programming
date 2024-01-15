#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
  ll n,m;
  cin >> n >> m;
  vector<ll> list(m, 0), suffix(n, 0);
  for(auto &el : list) cin >> el;
  ll index = m-1, dist = 0;
  for(ll i = n-1; i >= 0; i--){
    if(index >= 0 && list[index] == i+1){
      dist = 0;
      index--;
    }
    else{
      dist++;
    }
    suffix[i] = dist;
  }
  for(auto el : suffix) cout << el << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("../input.txt", "r", stdin);
// #endif
  
  solve();
}