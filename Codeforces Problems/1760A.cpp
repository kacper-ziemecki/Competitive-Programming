#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve(){
	vector<int> list(3, 0);
	for(auto &el : list) cin >> el;
	sort(list.begin(), list.end());
	cout << list[1] << endl;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--) solve();	
} 