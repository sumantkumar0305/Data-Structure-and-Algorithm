// GFG
// Bellman-Ford -> Med.

class Solution {
    vector<vector<pair<int,int>>> createGraph(vector<vector<int>>& edge, int node) {
        vector<vector<pair<int, int>>> graph(node);

        for (auto it : edge) {
            graph[it[0]].push_back({it[1], it[2]});
        }

        return graph;
    }

public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<vector<pair<int,int>>> graph = createGraph(edges, V);

        vector<int> dist(V, 1e8);
        dist[src] = 0;

        for (int i = 0; i < V - 1; i++) {
            for (int u = 0; u < V; u++) {
                for (auto it : graph[u]) {
                    int v = it.first;
                    int wt = it.second;

                    if (dist[u] != 1e8 && dist[v] > dist[u] + wt) {
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }

        for (int u = 0; u < V; u++) {
            for (auto it : graph[u]) {
                int v = it.first;
                int wt = it.second;

                if (dist[u] != 1e8 && dist[v] > dist[u] + wt) {
                    return {-1};
                }
            }
        }

        return dist;
    }
};
