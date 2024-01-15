#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

class Graph {

  int V;
  list<int>* l;

public:
  Graph(int v) {
    this->V = v;
    l = new list<int>[V];
  }

  void addEdge(int x, int y) {
    l[x].push_back(y);
    l[y].push_back(x);
  }
  bool dfs(int node, vector<bool>& visited, int parent) {
    //mark that node visited
    visited[node] = true;

    for (auto nbr : l[node]) {
      if (!visited[nbr]) {
        bool nbrdFoundACycle = dfs(nbr, visited, node);
        if (nbrdFoundACycle) return true;
      }
      else if (nbr != parent) return true;
    }
  }

  bool contains_cycle() {
    //graph is single component
    vector<bool> visited(V, false);
    return dfs(0, visited, -1);
  }
};

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  Graph g(6);
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(2, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.addEdge(2, 3);
  g.addEdge(3, 5);

  cout << g.contains_cycle() << endl;


  return 0;
}