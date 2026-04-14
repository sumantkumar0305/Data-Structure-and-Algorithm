// GFG
// Undirected Graph Cycle -> Med


class Solution {
    vector<vector<int>> undirected_unweighted(vector<vector<int>>& vec, int node){
        vector<vector<int>> adj(node);

        for(auto it : vec){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }

public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> graph = undirected_unweighted(edges, V);
        vector<bool> visit(V, false);

        for(int i = 0; i < V; i++){
            if(!visit[i]) {   

                queue<pair<int, int>> q;
                q.push({i, -1});   
                visit[i] = true;

                while(!q.empty()){
                    int u = q.front().first;
                    int par = q.front().second;
                    q.pop();

                    for(auto it : graph[u]){
                        if(!visit[it]){
                            visit[it] = true;
                            q.push({it, u});
                        }
                        else if(it != par){
                            return true; 
                        }
                    }
                }
            }
        }
        return false;
    }
};
