#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


class Segtree{
public:
  ll size;
  vector<ll> sums;
  Segtree(ll n){
    size = 1;
    while(size < n) size <<= 1;
    sums.assign(2*size, 0ll);
  }
  void set(ll i, ll v, ll x, ll lx, ll rx){
    if(rx-lx==1){
      sums[x]=(i&1 ? -v : v);
      return;
    }
    ll m = (lx+rx)/2;
    if(i < m) set(i, v, 2*x+1, lx, m);
    else set(i, v, 2*x+2, m, rx);
    sums[x] = sums[2*x+1] + sums[2*x+2];
  }
  void set(ll i, ll v){
    set(i, v, 0, 0, size);
  }
  ll sum(ll l, ll r, ll x, ll lx, ll rx){
    if(lx >= l && rx <= r){ return (l&1 ? -1 : 1) * sums[x]; }
    if(lx >= r || rx <= l) return 0;
    ll m = (lx+rx)/2;
    ll s1 = sum(l, r, 2*x+1, lx, m);
    ll s2 = sum(l, r, 2*x+2, m, rx);
    return s1+s2;
  }
  ll sum(ll l, ll r){
    return sum(l, r, 0, 0, size);
  }
};


void solve(){
  ll n,m,a,b,c;
  cin >> n;
  vector<ll> list(n);
  Segtree segtree(n);
  for(auto &el : list) cin >> el;
  for(ll i = 0; i < n; i++) segtree.set(i, list[i]);
  cin >> m;
  for(ll i = 0; i < m; i++){
    cin >> a >> b >> c;
    if(a){
      cout << segtree.sum(b-1, c) << endl;
    } else{
      segtree.set(b-1, c);
    }
  }
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../in.in", "r", stdin);
  freopen("../../out.out", "w", stdout);
#endif

  solve();
}