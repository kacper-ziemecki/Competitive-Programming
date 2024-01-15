#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool is_prime(ll i){
  for(ll j = 2; j*j <= i; j++){
    if(i%j == 0) return false;
  }
  return true;
}

void solve()
{
  ll n,suma = 0;
  cin >> n;
  priority_queue<ll, vector<ll>, greater<ll> > res;
  for(ll i = 2; i*i <= n; i++){
    if(is_prime(i)){
      while(n % i == 0){
        n/= i;
        res.push(i);
        suma += i;
      }
    }
  }
  if(n != 1){
    res.push(n);
    suma += n;
  }
  if(suma > 41){
    cout << -1 << endl;
    return;
  }
  // while(res.size() >= 2){
  //   ll one = res.top();
  //   res.pop();
  //   ll two = res.top();
  //   res.pop();
  //   if(one*two + suma - one - two <= 41){
  //     res.push(one*two);
  //   }
  //   else{
  //     res.push(one);
  //     res.push(two);
  //     break;
  //   }
  // }
  cout << res.size() + (41 - suma) << " ";
  while(!res.empty()){
    cout << res.top() << " ";
    res.pop();
  }
  for(ll i = 0; i < 41 - suma; i++){
    cout << 1 << " ";
  }
  cout << endl;
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
  for(ll i = 1; i <= t; i++){
    cout << "Case #" << i << ": ";
    solve(); 
  }
}