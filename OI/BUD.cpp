#include <bits/stdc++.h>
#include "testy.cpp"
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void mIsOne(ll &res, vector<string> &list, ll n, ll m){
  for(ll i = 0; i < n; i++){
    ll tmp1 = 0, tmp2=0;
    for(ll j = 0; j < n; j++){
      if(list[i][j] == '.') tmp1++;
      else tmp1=0;
      res = max(res, tmp1);

      if(list[j][i] == '.') tmp2++;
      else tmp2=0;
      res = max(res, tmp2);
    }
  }
}

void assigment(pair<ll, ll> &res, ll tmp, pair<ll, ll> &index, ll i, ll j){
  if(tmp >= res.first){
    res = {tmp, res.first};
    index = {i, j};
  }
  else if(tmp > res.second){
    res = {res.first, tmp};
  }
}

ll compute(pair<ll, ll> &one, pair<ll,ll> &two, ll size1, ll size2){
  if(one.first >= two.first-size2 && one.first <= two.first && one.second-size1 <= two.second && one.second >= two.second){
    ll one1 = two.second - (one.second-size1);
    ll one2 = one.second - two.second - 1;
    ll two1 = one.first - (two.first-size2);
    ll two2 = two.first - one.first - 1;

    ll res1 = min(size1, two1);
    ll res2 = min(size1, two2);
    ll res3 = min(size2, one1);
    ll res4 = min(size2, one2);
    return max({res1, res2, res3, res4});
  }
  else{
    return min(size1, size2);
  }
}

void solve()
{
  ll n,m,res=0;
  cin >> n >> m;
  vector<string> list(n, " ");
  for(auto &el : list) cin >> el;

  if(m == 1) mIsOne(res, list, n, m);
  else{
    //getting 2 max values for each row and column
    pair<ll, ll> res1 = {0, 0}, res2 = {0, 0};
    pair<ll, ll> index1 = {0, 0}, index2 = {0, 0};
    for(ll i = 0; i < n; i++){
      ll tmp1 = 0, tmp2=0;
      for(ll j = 0; j < n; j++){
        if(list[i][j] == '.') tmp1++;
        else{
          assigment(res1, tmp1, index1, i, j);
          tmp1=0;
        }
        if(list[j][i] == '.') tmp2++;
        else{
          assigment(res2, tmp2, index2, j, i);
          tmp2=0;
        }
      }
      assigment(res1, tmp1, index1, i, n);
      assigment(res2, tmp2, index2, n, i);
    }

    //assigninig the possible combinations
    ll one = min(res1.first, res1.second);
    one = max(one, res1.first/2);

    ll two = min(res2.first, res2.second);
    two = max(two, res2.first/2);

    ll three = compute(index1, index2, res1.first, res2.first);
    // cout << one << " " << two << " " << three << endl;
    res = max({one, two, three});
  }
  cout << res << endl;
}

int main()
{

//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("../in.in", "r", stdin);
//   freopen("../out.out", "w", stdout);
// #endif
// solve();
  
  
  test(&solve, "testy/testy_bud-20231118T112154Z-001/testy_bud/in/bud", "testy/testy_bud-20231118T112154Z-001/testy_bud/out/bud", "../outres.out", "../out.out", 1, 100, 1, 5);
}