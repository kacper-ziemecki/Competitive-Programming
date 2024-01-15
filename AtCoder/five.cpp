#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool checking(vector<ll> check, ll p){
  for(auto el : check){
    if(el < p){
      return false;
    }
  }
  return true;
}

void subsolve(vector<pair<ll, vector<ll>>> list, ll index, vector<ll> check, ll p, ll temp, ll &res){
  if(checking(check, p)) res = min(res, temp);
  if(index >= list.size()) return;

  subsolve(list, index+1, check, p, temp, res);

  for(ll i = 0; i < check.size(); i++){
    check[i] += list[index].second[i];
  }
  temp += list[index].first;
  subsolve(list, index+1, check, p, temp, res);
}

void solve()
{
  ll n,k,p;
  cin >> n >> k >> p;
  ll c, a;
  vector<pair<ll, vector<ll>>> list;
  vector<ll> check(k, 0), sended(k, 0);
  for(ll i = 0; i < n; i++){
    cin >> c >> a;
    list.push_back({c, {a}});
    check[0] += a;
    for(ll j = 1; j < k; j++){
      cin >> a;
      list.back().second.push_back(a);
      check[j] += a;
    }
  }
  if(!checking(check, p)){
    cout << -1 << endl;
    return;
  }
  ll res = LONG_LONG_MAX;
  subsolve(list, 0, sended, p, 0, res);
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