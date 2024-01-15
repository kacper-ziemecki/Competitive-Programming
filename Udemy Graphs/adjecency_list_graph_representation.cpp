#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

class Graph{

    int V;
    list<int> *l;

    public:
        Graph(int v){
            V = v;
            l = new list<int>[V];
        }

        void addEdge(int i, int j, bool undir=true){
            l[i].push_back(j);
            if(undir){
                l[j].push_back(i);
            }
        }

        void pringAdjList(){
            //Iterate over all the rows
            for(int i = 0; i < V; i++){
                cout << i << "-->";
                //every element of ith linked list
                for(auto node : l[i]){
                    cout << node << ",";
                }
                cout << endl;
            }
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
   g.addEdge(0,1);
   g.addEdge(0,4);
   g.addEdge(2,1);
   g.addEdge(3,4);
   g.addEdge(4,5);
   g.addEdge(2,3);
   g.addEdge(3,5);
   g.pringAdjList();

   return 0;
}