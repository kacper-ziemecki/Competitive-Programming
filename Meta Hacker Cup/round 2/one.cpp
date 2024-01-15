#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
  ld n;
  cin >> n;
  vector<ld>list(n, 0);
  for(auto &el : list) cin >> el;
  sort(list.begin(), list.end());
  if(list.size() == 5){
    ld one = ((list[n-1]+list[n-3])/2.0) - ((list[0]+list[1])/2.0);
    ld two = ((list[n-1]+list[n-2])/2.0) - ((list[0]+list[2])/2.0);
    
    cout << max(one, two) << endl;
  }
  else{
    cout << (list[n-2]+list[n-1])/2.0 - (list[0]+list[1])/2.0 << endl;
  }
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

  ll t;
  cin >> t;
  cout << fixed << setprecision(7);
  for(ll i = 1; i <= t; i++){
    cout << "Case #" << i << ": ";
    solve();
  }
  
}