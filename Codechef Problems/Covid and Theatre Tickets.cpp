#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	cout << ((a+2-1)/2) * ((b+2-1)/2) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
