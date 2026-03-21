class Solution {
    vector<vector<int>>directed(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ //Graph Edge between u->v
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        return adj;
    }
    
    vector<int>indegree(vector<vector<int>>&graph, int v){
        vector<int>indeg(v, 0);
        for(int u = 0; u < v; u++){
            vector<int>negh = graph[u];
            for(auto it : negh){
                indeg[it]++;
            }
        }
    
        return indeg;
    }
    
  public:
    vector<int> topoSort(int v, vector<vector<int>>& edge) {
        // code here
        edge = directed(edge, v);
        vector<int>indeg = indegree(edge, v);
        vector<int>ans;
    
        queue<int>qu;
        for(int i = 0; i < v; i++){
            if(indeg[i] == 0){
                qu.push(i);
            }
        }
    
        while(!qu.empty()){
            int u = qu.front();
            qu.pop();
            ans.push_back(u);
    
            vector<int>neigh = edge[u];
            for(auto it : neigh){
                indeg[it]--;
                if(indeg[it] == 0){
                    qu.push(it);
                }
            }
        }
    
        return ans;
    }
};
