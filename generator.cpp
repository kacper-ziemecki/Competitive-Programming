#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


ll rnd(ll a, ll b){
  return rand() % (b - a + 1) + a;
}
 
int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // #ifndef ONLINE_JUDGE
  //   freopen("../in.in", "r", stdin);
  //   freopen("../out.out", "w", stdout);
  // #endif

  ll seed;
  cin >> seed;
  srand(seed);

  ll n=rnd(1,10), m=rnd(1,10);
  cout << n << " " << m << endl;
  vector<vector<ll>> list(n, vector<ll>(m, 0));
  list[0][0] = rnd(1,1000);
  for(ll i=1; i < n; i++) list[i][0] = rnd(list[i-1][0], 1000);
  for(ll j=1; j < m; j++) list[0][j] = rnd(list[0][j-1], 1000);
  for(ll i = 1; i < n; i++){
    for(ll j = 1; j < m; j++){
      list[i][j] = rnd(max(list[i-1][j], list[i][j-1]), 1000);
    }
  }
  for(auto sub : list){
    for(auto el : sub) cout << el << " ";
    cout << endl;
  }
  ll q=rnd(1,10);
  cout << q << endl;
  for(ll i = 0; i < q; i++){
    ll tmp1 = rnd(1, 1000);
    ll tmp2 = rnd(tmp1, 1000);
    cout << tmp1 << " " << tmp2 << endl;
  }
  cout << "0 0\n";
} 