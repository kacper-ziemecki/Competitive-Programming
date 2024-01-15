#include <bits/stdc++.h>
// #include "testy.cpp"
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
  ll n;
  cin >> n;
  vector<pair<ll, ll>> list(n, {0, 0});
  vector<pair<pair<ll, ll>, pair<ll, ll>>> res1;
  vector<pair<ll, ll>> res2;
  map<pair<ll, ll>, ll> mapa;
  for(auto &el : list) cin >> el.second >> el.first;
  for(ll i = 0; i < n; i++){
    mapa[list[i]] = i;
  }
  sort(list.begin(), list.end());
  ll last = -1;
  for(ll i = 0; i < n; i++){
    if(list[i].second >= last){
      res1.push_back({list[i], {0, 0}});
      i++;
      while(list[i].second <= last && i < n){
        i++;   
      }
      if(i >= n){
        break;
      } else{
        res1.back().second = list[i];
      }
      last = list[i].first;
    }
  }
  last = -1;
  for(ll i = 0; i < n; i++){
    if(list[i].second >= last){
      res2.push_back(list[i]);
      last = list[i].first;
    }
  }
  if(res1.size() >= res2.size()-1){
    cout << res1.size() << endl;
    for(auto el : res1){
      cout << mapa[el.first]+1 << " " << mapa[el.second]+1 << endl;
    }
  } else{
    cout << res2.size()-1 << endl;
    for(ll i = 0; i < res2.size()-1; i++){
      cout << mapa[res2[i]]+1 << " " << mapa[res2.back()]+1 << endl;
    }
  }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../in.in", "r", stdin);
  freopen("../out.out", "w", stdout);
#endif

  solve();
  // test(&solve, "testy/zap/zap/in/zap", "testy/zap/zap/out/zap", "../outres.out", "../out.out", 1, 10000, 1, 100, false, 1);

}