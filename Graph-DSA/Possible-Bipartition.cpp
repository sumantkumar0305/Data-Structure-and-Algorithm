// Leetcode
// 886. Possible Bipartition -> Med.

class Solution {
    vector<vector<int>>undirected_unweighted(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for(auto it : vec){
            int u = it[0]-1;
            int v = it[1]-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return adj;
    }
    
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        dislikes = undirected_unweighted(dislikes, n);
        vector<int>vis(n, -1);
        queue<int>q;
        for(int j = 0; j < n; j++){
            if(vis[j] != -1) continue;
            vis[j] = 0;
            q.push(j);

            while(q.size() > 0){
                auto it = q.front();
                q.pop();

                for(auto i : dislikes[it]){
                    if(vis[i] == -1){
                        vis[i] = !vis[it];
                        q.push(i);
                    }else{
                        if(vis[i] == vis[it]) return false;
                    }
                }
            }
        }
        

        return true;
    }
};
