// Leetcode
// 851. Loud and Rich -> Med.

class Solution {
    vector<vector<int>>directed_unweighted(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ 
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }

        return adj;
    }

    int find(vector<vector<int>>&graph, int src, vector<int>&quiet, int n){
        queue<int>q;
        q.push(src);
        int minVal = 501;
        int idx;
        vector<bool>vis(n, false);
        vis[src] = true;

        while(q.size() > 0){
            int u = q.front();
            if(quiet[u] < minVal){
                minVal = quiet[u];
                idx = u;
            }
            q.pop();

            for(auto it : graph[u]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }

        return idx;
    }
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();
        richer = directed_unweighted(richer, n);
        vector<int>ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = find(richer, i, quiet, n);
        }

        return ans;
    } 
};
