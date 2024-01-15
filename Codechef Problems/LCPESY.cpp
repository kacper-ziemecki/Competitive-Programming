  #include <bits/stdc++.h>
  using namespace std;
  #define endl "\n"
  #define ll long long
  #define ld long double


  void solve()
  {
    string one, two;
    cin >> one >> two;
    ll res = 0;
    map<char, ll> first, second;
    for(auto el : one) first[el]++;
    for(auto el : two) second[el]++;
    set<char> zbior;
    for(auto el : one) zbior.emplace(el);
    for(auto el : zbior){
      // cout << el << " -> " << min(first[el], second[el]) << endl;
      res += min(first[el], second[el]);
    }
    cout << res << endl;
  }

  int main()
  {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
  #endif
    
    ll t;
    cin >> t;
    while(t--)
    solve();
  }