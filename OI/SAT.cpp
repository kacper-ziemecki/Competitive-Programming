#include <bits/stdc++.h>
//#include "testy.cpp"
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve(){
  ll n,p,M,u,v;
  cin >> n >> p >> M;
  vector<string> a(n, string(n+1, 'A')), b(n, string(n+1, 'B'));
  vector<vector<ll>> al(n+1, vector<ll>());
  map<string, vector<ll>> mapa;
  for(ll i = 0; i < p; i++){
    cin >> u >> v;
    al[v-n].push_back(u);
  }
  for(ll i = 0; i < n; i++){
    a[i][i+1] = 'C';
  }
  for(ll i = 0; i < n; i++){
    for(auto j : al[i+1]){
      b[i][j] = 'C';
    }
  }
  for(ll i = 0; i < n; i++){
    mapa[b[i]].push_back(i);
  }
  ll maxSize = n+1;
  for(auto el : mapa){
    for(ll i = 0; i < el.second.size(); i++){
      ll x = i;
      while(x){
        b[el.second[i]] += (x&1 ? 'C' : 'B');
        x >>= 1;
      }
      maxSize = max(maxSize, (ll)b[el.second[i]].size());
    }
  }
  for(auto &el : a){
    while(el.size() < maxSize){
      el += 'A';
    }
  }
  for(auto &el : b){
    while(el.size() < maxSize){
      el += 'B';
    }
  }
  cout << maxSize << endl;
  for(auto el : a) cout << el << endl;
  for(auto el : b) cout << el << endl;
}

int main() {
  
// #ifndef ONLINE_JUDGE
//   freopen("../in.in", "r", stdin);
//   freopen("../out.out", "w", stdout);
// #endif
    
    solve();
}
