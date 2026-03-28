// GFG
// Dijkstra Algorithm -> Med

class Solution {
    vector<vector<pair<int,int>>> createGraph(vector<vector<int>>&edge, int node){
        vector<vector<pair<int, int>>>graph(node); //pair<int, int> child node and wt
    
        for(auto it : edge){
            graph[it[0]].push_back({it[1], it[2]});
            graph[it[1]].push_back({it[0], it[2]});
        }
    
        return graph;
    }
    
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>>graph = createGraph(edges, V);
    
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>ans(V, INT_MAX);
    
        pq.push({0,src});
        ans[src] = 0;
    
        while(pq.size()>0){
            int dist = pq.top().first;
            int u = pq.top().second;
            pq.pop();
    
            if (dist > ans[u]) continue;
    
            for(auto it : graph[u]){
                if(ans[it.first] > ans[u]+it.second){
                    ans[it.first] = ans[u]+it.second;
                    pq.push({ans[it.first], it.first});
                }
            }
        }
    
        return ans;
    }
};
