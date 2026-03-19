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

        for(auto it : vec){ //Graph Edge between u->v and v->u
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return adj;
    }

    vector<vector<int>>directed_unweighted(vector<vector<int>>&vec){
        vector<vector<int>> adj(node);

        for (auto it : vec){ //Graph Edge between u->v
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        return adj;
    }
};

int main(){
    Graph g(4);

    vector<vector<int>>vec = {  
        {0,1},  
        {1,2},
        {1,3},
        {2,3}
    };

    vector<vector<int>>undirected_unweighted = g.undirected_unweighted(vec);

    cout<<"Undirected unweighted graph: \n";
    for(int i = 0; i < undirected_unweighted.size(); i++){
        cout<<i<<" -> ";
        for(auto it : undirected_unweighted[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    vec = {
        {1,0},
        {1,2},
        {1,3},
        {2,3}
    };

    vector<vector<int>>directed_unweighted = g.directed_unweighted(vec);

    cout<<"Directed unweighted graph: \n";
    for(int i = 0; i < directed_unweighted.size(); i++){
        if(directed_unweighted[i].size() < 1) continue;
        cout<<i<<" -> ";
        for(auto it : directed_unweighted[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}
    vector<vector<int>>gr = g.undirected_unweighted(vec);

    return 0;
}
