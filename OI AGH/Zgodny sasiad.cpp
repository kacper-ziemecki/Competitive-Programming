#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool check(ll a, ll b){
  for(ll i = 2; i <= min(a,b); i++){
    if(a%i == 0 && b%i == 0){
      while(a%i == 0) a/=i;
      while(b%i == 0) b/=i;
    }
  }
  if(a == 1 && b == 1) return true;
  return false;
}

ll compute(vector<vector<ll>> &list, ll i, ll j, ll n){
  ll res = 0;
  if(i-1 >= 0) res += check(list[i][j], list[i-1][j]);
  if(j-1 >= 0) res += check(list[i][j], list[i][j-1]);
  if(i+1 < n) res += check(list[i][j], list[i+1][j]);
  if(j+1 < n) res += check(list[i][j], list[i][j+1]);
  return res;
}

void solve()
{
  ll n,a,res=0;
  cin >> n >> a;
  vector<vector<ll>> list(n, vector<ll>(n, 0));
  list[0][0] = a;
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < n; j++){
      if(i == 0 && j == 0) continue;
      list[i][j] = (3ll*list[(j == 0 ? i-1 : i)][(j == 0 ? n-1: j-1)])%53;
    }
  }
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < n; j++){
      res += compute(list, i, j, n);
    }
  }
  cout << res << endl;
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