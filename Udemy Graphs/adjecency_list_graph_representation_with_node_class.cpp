#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

class Node{
    public:
        string name;
        list<string> nbrs;

        Node(string name){
            this->name = name;
        }
};

class Graph{

    //All Nodes
    //Hashmap (String, Node*)
    unordered_map<string, Node*> m;

    public:
        Graph(vector<string> cities){
            for(auto city: cities){
                m[city] = new Node(city);
            }
        }

        void addEdge(string x, string y, bool undir=false){
            m[x]->nbrs.push_back(y);
            if(undir){
                m[y]->nbrs.push_back(x);
            }
        }

        void printAdjList(){
            for(auto cityPair : m){
                auto city = cityPair.first;
                Node *node = cityPair.second;
                cout << city << "-->";
                for(auto nbr : node->nbrs){
                    cout << nbr << ",";
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
    
   vector<string> cities = {"Delhi", "London", "Paris", "New York"};
   Graph g(cities);

   g.addEdge("Delhi", "London");
   g.addEdge("New York", "London");
   g.addEdge("Delhi", "Paris");
   g.addEdge("Paris", "New York");

   g.printAdjList();

   return 0;
}