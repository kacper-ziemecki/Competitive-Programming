#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

class UnionFind{
public:
  ll size = 0;
  vector<ll> p,r;
  UnionFind(ll n){
    p.assign(n, 0);
    r.assign(n, 1);
    for(ll i = 0; i < n; i++){
      p[i] = i;
    }
    size = n-1;
  }
  ll unionFind(ll a){
    return (a == p[a] ? a : p[a] = unionFind(p[a]));
  }
  void unionUnion(ll a, ll b){
    a = unionFind(a);
    b = unionFind(b);
    if(a == b) return;
    size--;
    if(r[a] == r[b]) r[a]++;
    if(r[a] > r[b]){
      p[b] = p[a];
    }
    else{
      p[a] = p[b];
    }
  }
};

void solve()
{
  int n,m,p;
  cin >> n >> m >> p;
  UnionFind UF(max(n,m)+1);
  int a,b;
  for(int i = 0; i < p; i++){
    cin >> a >> b;
    // cout << UF.size << endl;
    UF.unionUnion(a,b);
  }
  cout << UF.size << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
  
  solve();
}