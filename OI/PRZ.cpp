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

void cycle(ll v, ll p, vector<vector<ll>> &al, vector<bool> &vis, vector<ll> &res, bool &flag){
    vis[v] = true;
    if(flag) return;
    res.push_back(v);
    for(auto u : al[v]){
        if(!vis[u]){
           cycle(u, v, al, vis, res, flag);
           if(flag) return;
        } else if(u != p){
            res.push_back(u);
            flag = true;
            return;
        }
    }
}

void dfs(ll v, vector<vector<ll>> &al, vector<bool> &vis, vector<ll> &count, vector<pair<ll,ll>> &ans){
    vis[v] = true;
    for(auto u : al[v]){
        if(!vis[u]){
            dfs(u, al, vis, count, ans);
            if(!(count[u]&1)){
                ans.push_back({v, u});
                count[v]++;
                count[u]++;
            }
        }
    }
}

void solve()
{
    ll n,m,u,v;
    cin >> n >> m;
    vector<vector<ll>> al(2*n+1, vector<ll>());
    vector<bool> vis(2*n+1, 0);
    vector<ll> res;
    vector<ll> final;
    map<pair<ll, ll>, ll> mapa;
    bool flag = false;
    for(ll i = 0; i < m; i++){
        cin >> u >> v;
        al[u].push_back(v+n);
        al[v+n].push_back(u);
        mapa[{u, v+n}] = i+1;
        mapa[{v+n, u}] = i+1;
    }
    //checking if there is an even solution (there is a cycle)
    for(ll i = 1; i <= m; i++){
        if(!vis[i]){
            cycle(i, -1, al, vis, res, flag);
        }
        if(flag){
            for(ll i = res.size()-1; i > 0; i--){
                if(res[i] == res.back() && i != res.size()-1) break;
                final.push_back(mapa[{res[i], res[i-1]}]);
            }
            cout << "TAK\n";
            cout << final.size() << endl;
            for(auto el : final){
                cout << el << " ";
            }
            cout << endl;
            return;
        }
    }
    // checking if there is an odd solution
    vector<ll> count(2*n+1, 0);
    vector<pair<ll,ll>> ans;
    vis.assign(2*n+1, false);
    for(ll i = 1; i < 2*n+1; i++){
        dfs(i, al, vis, count, ans);
    }

    //testing if there is an answer
    vector<ll> one(n+1, 0), two(n+1, 0);
    for(auto el : ans){
        if(el.first > el.second){
            one[el.second]++;
            two[el.first-n]++;
        } else{
            one[el.first]++;
            two[el.second-n]++;
        }
    }

    flag = true;
    for(ll i = 1; i <= n; i++){
        if(!(one[i]&1)) flag = false;
        if(!(two[i]&1)) flag = false;
    }
    if(!flag){
        cout << "NIE\n";
        return;
    }

    for(auto el : ans){
        final.push_back(mapa[el]);
    }
    cout << "TAK\n";
    cout << final.size() << endl;
    for(auto el : final){
        cout << el << " ";
    }
    cout << endl;
}

int main()
{

//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("../in.in", "r", stdin);
//   freopen("../out.out", "w", stdout);
// #endif

//   solve();
  
  test(&solve, "testy/prz_nieduza_paczka/prz/in/prz", "testy/prz_nieduza_paczka/prz/out/prz", "../outres.out", "../out.out", 3, 3, 1, 1, true, 1);
}