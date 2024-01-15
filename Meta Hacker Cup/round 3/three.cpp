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
  ll n;
  cin >> n;
  vector<ll> a(2*n, 0), b(2*n, 0), ones(2*n, 0), zeros(2*n, 0);
  vector<bool> test(2*n, false);
  for(ll i = 0; i < n; i++) cin >> a[i];
  for(ll i = 0; i < n; i++) cin >> b[i];
  for(ll i = n; i < 2*n; i++){
    a[i] = b[i-n];
    b[i] = a[i-n];
  }
  for(ll i = 0; i < 2*n; i++){
    if(a[i] < b[i]) test[i] = true;
  }
  ones[0] = (test[0] ? 1 : 0);
  zeros[0] = (!test[0] ? 1 : 0);
  for(ll i = 1; i < 2*n; i++){
    if(test[i]){
      ones[i] = ones[i-1] + 1;
      zeros[i] = 0;
    } else{
      ones[i] = 0;
      zeros[i] = zeros[i-1] + 1;
    }
  }
  for(auto el : ones) cout << el << " ";
  cout << endl;
  for(auto el : zeros) cout << el << " ";
  cout <
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
  for(ll i = 1; i <= t; i++){
    cout << "Case #" << i << ": ";
    solve();
  }
  
}