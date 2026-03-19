//Implement Graph Using Adjency List

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int node;
public:
    Graph(int node){
        this->node = node;
    }

    vector<vector<int>>undirected_unweighted(vector<vector<int>>&vec){
        vector<vector<int>> adj(node);

        for(auto it : vec){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        return adj;
    }
};

int main(){
    Graph g(4);

    vector<vector<int>>vec = {
        {0, 1},
        {1,2},
        {1,3},
        {2,3}
    };

    vector<vector<int>>gr = g.undirected_unweighted(vec);

    return 0;
}
