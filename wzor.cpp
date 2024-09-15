#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



void solve(ll n, ll m)
{ 
  vector<vector<ll>> list(n, vector<ll>(m, 0)), res;
  for(auto &sub: list){
    for(auto &el : sub) cin >> el;
  }
  for(ll i = 0; i < n; i++){
    vector<ll> tmp;
    for(ll j = 0; j < m && i+j < n; j++){
      tmp.push_back(list[i+j][j]);
    }
    res.push_back(tmp);
  }
  for(ll j = 1; j < m; j++){
    vector<ll> tmp;
    for(ll i = 0; i < n && i+j < m; i++){
      tmp.push_back(list[i][j+i]);
    }
    res.push_back(tmp);
  }
  // for(auto sub: res){
  //   for(auto el : sub) cout << el << " ";
  //   cout << endl;
  // }

  ll q,l,r;
  cin >> q;
  for(ll i = 0; i < q; i++){
    cin >> l >> r;
    ll ans=0;
    for(auto sub: res){
      ll left = lower_bound(sub.begin(), sub.end(), l)-sub.begin();
      ll right = upper_bound(sub.begin(), sub.end(), r)-sub.begin()-1;
      if(left == sub.size() || right == -1) continue;
      ans = max(ans, right-left+1);
    }
    cout << ans << endl;
  }
  cout << "-\n";
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("../../in.in", "r", stdin);
//   freopen("../../out.out", "w", stdout);
// #endif

  ll n,m,i=0;
  while(cin >> n >> m, !(n==0 && m==0)){
    if(i++ == 2) break;
    solve(n, m);
  }
}