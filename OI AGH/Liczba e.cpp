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
  ll N=10009, n=N, x, res=9, a;
  vector<ll> list(10009, 1);
  list[0] = 0;
  list[1] = 2;
  cin >> a;

  ll i = 0;
  for(;N>9;){
    for(n=N--;--n;){
      list[n]=x%n;
      x=10*list[n-1]+x/n;
    }
      dbg(x, i);
      i++;
      if(i > 1) res += x;
      if(i == a){
        cout << res << endl;
        return;
      }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
#endif

  solve();

} 


