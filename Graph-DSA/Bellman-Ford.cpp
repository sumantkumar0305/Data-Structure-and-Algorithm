// GFG
// Bellman-Ford -> Med.

// User function Template for C++

class Solution {
    vector<vector<pair<int,int>>> createGraph(vector<vector<int>>&edge, int node){
        vector<vector<pair<int, int>>>graph(node); //pair<int, int> child node and wt
    
        for(auto it : edge){
            graph[it[0]].push_back({it[1], it[2]});
        }
    
        return graph;
    }
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<vector<pair<int,int>>>graph = createGraph(edges, V);
        vector<int>dist(V, INT_MAX);
        dist[src] = 0;
    
        for(int i = 0; i < V-1; i++){
            for(int u = 0; u < V; u++){
                for(auto it : graph[u]){
                    if(dist[it.first] > dist[u] + it.second){
                        dist[it.first] = dist[u] + it.second;
                    }
                }
            }
        }
    
        return dist;
    }
};
