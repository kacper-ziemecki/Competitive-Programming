#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double



void solve()
{
	ll n,m;
	cin >> n >> m;
	vector<ll> jeden(n),dwa(m);
	for(auto &el : jeden) cin >> el;
	for(auto &el : dwa) cin >> el;
	ll i = 0;
	for(ll j = 0; j < m; j++){
		while(i < n && jeden[i] < dwa[j]){
			i++;
		}
		cout << i << " ";
	}
	cout << endl;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("../../../../input.txt", "r", stdin);
  freopen("../../../../output.txt", "w", stdout);
#endif

  solve();
}