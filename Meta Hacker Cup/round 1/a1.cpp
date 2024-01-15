#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


string solve()
{
  ll s,d,k;
  cin >> s >> d >> k;
  ll mieso = s + 2*d, chleb = 2*s + 2*d, ser = s + 2*d;
  ll mieso1 = k, chleb1 = k+1, ser1 = k;
  if(mieso >= mieso1 && chleb >= chleb1 && ser >= ser1){
    return "YES";
  }
  else{
    return "NO";
  }

}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  
  ll t;
  cin >> t;
  for(ll i = 1; i <= t; i++){
    cout << "Case #" << i << ": " << solve() << endl;
  }
}