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

void solve()
{
  ll n,k,a,b;
  string s;
  cin >> n >> k >> a >> b >> s;

  map<deque<char>, map<char, ll>> one;
  map<deque<char>, pair<char, ll>> two;

  deque<char> sub;
  for(ll i = 0; i < k; i++) sub.push_back(s[i]); //init

  for(ll i = k; i < n; i++){
    one[sub][s[i]]++;

    sub.pop_front();
    sub.push_back(s[i]);
  }
  for(auto el : one){
    pair<char, ll> tmp = {'a', 0};
    for(auto para : el.second){
      if(tmp.second < para.second) tmp = para;
    }
    two[el.first] = {tmp.first, -1};
  }
  ll i = n-1;
  ll cntA = 0;
  string loop="a";
  while(true){
    i++;
    if(two.find(sub) == two.end()){
      s += 'a';
      cntA++;
    } else if(two[sub].second == -1){
      cntA=0;
      s += two[sub].first;
      two[sub].second = i;
    } else{ //we found a loop
      cntA=0;
      loop = s.substr(two[sub].second, i-two[sub].second);
      break;
    }

    if(cntA > k) break;
    sub.pop_front();
    sub.push_back(s[i]);
  }
  ll loopSize = loop.size();
  for(ll x = a-1; x < b; x++){
    if(x <= i){
      cout << s[x];
    } else{
      cout << loop[(x-i)%loopSize];
    }
  }
  cout << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);
#endif

  test(&solve, "testy/cza/in/cza", "testy/cza/out/cza", "../outres.out", "../out.out", 1, 100, 1);
}