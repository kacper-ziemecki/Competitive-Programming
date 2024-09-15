#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool check(ll left, ll right, vector<vector<ll>>& list, ll a, ll b, ll c, ll d){
  for(ll i = a; i <= c; i++){
    for(ll j = b; j <= d; j++){
      if(list[i][j] < left || list[i][j] > right) return false;
    }
  }
  return true;
}

void solve(ll n, ll m)
{ 
  vector<vector<ll>> list(n, vector<ll>(m, 0));
  for(auto &sub: list){
    for(auto &el : sub) cin >> el;
  }
  ll q, left, right;
  cin >> q;
  for(ll x=0; x < q; x++){
    cin >> left >> right;
    ll ans=0;
    for(ll i = 0; i < n; i++){
      for(ll j = 0; j < m; j++){
        for(ll k=0; i+k < n && j+k < m; k++){
          if(check(left, right, list, i, j, i+k, j+k)) ans = max(ans, k+1);
        }
      }
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
//   freopen("../in.in", "r", stdin);
//   freopen("../out.out", "w", stdout);
// #endif

  ll n,m,i=0;
  while(cin >> n >> m, !(n==0 && m==0)){
    if(i++ == 2) break;
    solve(n, m);
  }
}