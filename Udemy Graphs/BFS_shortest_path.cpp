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
        void bfs(int source, int dest = -1){

            queue<int> q;
            bool *visited = new bool[V]{0};
            int *dist = new int[V]{0};
            int *parent = new int[V];

            for(int i = 0; i < V; i++){
                parent[i] = -1;
            }

            q.push(source);
            visited[source] = true;
            parent[source] = source;
            dist[source] = 0;
            while(!q.empty()){
                // do some work for every node
                int f = q.front();
                cout << f << endl;
                q.pop();
            
                //push the nbrs of current node inside q if they are not already visited
                for(auto nbr : l[f]){
                    if(!visited[nbr]){
                        q.push(nbr);
                        //parent and dist
                        parent[nbr] = f;
                        dist[nbr] = dist[f] + 1;
                        visited[nbr] = true;

                    }
                }
            }
            //print the shortest distance
            for(int i = 0; i < V; i++){
                cout << "Shortest dist to " << i << " is " << dist[i] << endl;
            }

            //print the path from a source to any destination
            if(dest != -1){
                int temp = dest;
                while(temp != source){
                    cout << temp << " -- ";
                    temp = parent[temp];
                }
                cout << source << endl;
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

   g.bfs(1,5);

   return 0;
}