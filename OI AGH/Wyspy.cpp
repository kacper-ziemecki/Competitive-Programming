#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
  ll n,a,b,c;
  cin >> n >> a >> b;
  vector<vector<pair<ll, ll>>> al(n, vector<pair<ll, ll>>());
  vector<set<ll>> road(n, set<ll>());
  for(ll i = 0; i < n; i++){
    for(ll j = 0; j < n; j++){
      cin >> c;
      if(c != 0){
        al[i].push_back({j, c});
      }
    }
  }

  //dijakstra
  vector<ll> dist(n, INT_MAX); dist[a] = 0;
  set<pair<ll, ll>> pq;
  for(int u = 0; u < n; u++){
    pq.emplace(dist[u], u);
  }

  while(!pq.empty()){
    auto d = (*pq.begin()).first , u = (*pq.begin()).second;
    pq.erase(pq.begin());
    for(auto &el : al[u]){
      auto &v = el.first, &w = el.second;
      if(dist[u]+w > dist[v]) continue;
      if(dist[u]+w == dist[v]){
        if(road[u].size() > 1 || w != *road[u].begin()){
          road[v].emplace(w);
        }
      }
      else{
        if(road[u].size() > 1 || w != *road[u].begin()){
          road[v].clear();
          road[v].emplace(w);
          pq.erase(pq.find({dist[v], v}));
          dist[v] = dist[u]+w;
          pq.emplace(dist[v], v);
        }
      }
    }
  }
  cout << (dist[b] == INT_MAX ? -1 : dist[b]) << endl;
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
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long
// #define ull unsigned long long
// #define ld long double
// void dbg_out() { cout << endl; }
// template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
// #define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// void lowest(ull &den3, ull &num3)
// {
//     ull common_factor = __gcd(num3,den3);
//     den3 = den3/common_factor;
//     num3 = num3/common_factor;
// }
 
// void add(ull num1, ull den1, ull num2, ull den2, ull &num3, ull &den3)
// {
//     den3 = __gcd(den1,den2);
//     den3 = (den1*den2) / den3;
//     num3 = (num1)*(den3/den1) + (num2)*(den3/den2);
//     lowest(den3,num3);
// }

// void solve()
// {
//   ull n;
//   ull nominator=1, denominator=1, factorial=1;
//   ull nominatorFact = 1, denominatorFact = 1;
//   ull nominatorRes,denominatorRes;
//   cin >> n;
//   while(denominator < 1e9){
//     denominatorFact*=factorial;
//     factorial++;

//     add(nominator, denominator, nominatorFact, denominatorFact, nominatorRes, denominatorRes);
//     nominator = nominatorRes;
//     denominator = denominatorRes;
//     cout << nominator << "/" << denominator << endl;
//   }
  
//   string res;
//   for(ll i = 0; i < 20; i++){
//     res += to_string(nominator/denominator);
//     nominator -= denominator * (nominator/denominator);
//     nominator *= 10;
//     while(nominator < denominator){
//       nominator *= 10;
//       res += '0';
//     }
//   }
//   cout << res << endl;
// }

// int main()
// {

//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("../input.txt", "r", stdin);
// #endif

//   solve();
  
// }

