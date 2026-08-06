// Leetcode
// 2642. Design Graph With Shortest Path Calculator -> Hard

class Graph {
    vector<vector<pair<int, int>>>vec;
    int n;
public:
    Graph(int n, vector<vector<int>>& edges) {
        vec = vector<vector<pair<int, int>>>(n);
        this->n = n;

        for(auto it : edges){
            int u = it[0], v = it[1], wt = it[2];
            vec[u].push_back({v, wt});
        }
    }
    
    void addEdge(vector<int> edge) {
        int u = edge[0], v = edge[1], wt = edge[2];
        vec[u].push_back({v, wt});
    }

    int dijktra(int u, int v){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>>pq;
        vector<int>dist(n, INT_MAX);
        dist[u] = 0;
        pq.push({0, u});

        while(pq.size() > 0){
            int t = pq.top().second;
            pq.pop();

            for(auto it : vec[t]){
                if(dist[it.first] > dist[t] + it.second){
                    dist[it.first] = dist[t] + it.second;
                    pq.push({dist[it.first], it.first});
                }
            }
        }

        return dist[v] == INT_MAX ? -1 : dist[v];
    }
    
    int shortestPath(int node1, int node2) {
        return dijktra(node1, node2);
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
