// LeetCode
// 2642. Design Graph With Shortest Path Calculator -> Hard

class Graph {
    vector<vector<pair<int,int>>>g;
    int v;
public:
    Graph(int n, vector<vector<int>>& edges) {
        this->g = vector<vector<pair<int,int>>>(n);
        this->v = n;

        for(auto it : edges){
            this->g[it[0]].push_back({it[1], it[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        g[edge[0]].push_back({edge[1], edge[2]});
    }
    
    int shortestPath(int src, int dst) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>dist(v, INT_MAX);

        pq.push({0, src});
        dist[src] = 0;
        
        while(pq.size()>0){
            int u = pq.top().second;
            int par_cost = pq.top().first;
            pq.pop();

            if (par_cost > dist[u]) continue;

            for(auto it : g[u]){
                if(dist[it.first] > dist[u]+it.second){
                    dist[it.first] = dist[u] + it.second;
                    pq.push({dist[it.first], it.first});
                }
            }
        }

        if(dist[dst] == INT_MAX) return -1;
        return dist[dst];
    }
};
