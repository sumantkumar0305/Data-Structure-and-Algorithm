// LeetCode
// 1615. Maximal Network Rank -> Med

class Solution {
    vector<unordered_set<int>>undirected_unweighted(vector<vector<int>>&vec, int node){
        vector<unordered_set<int>>adj(node);
        
        for(auto it : vec){
            int u = it[0];
            int v = it[1];
            adj[u].insert(v);
            adj[v].insert(u);
        }

        return adj;
    }
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>>gr = undirected_unweighted(roads, n);

        vector<int>deg(n, 0);
        for(int i = 0; i < n; i++){
            for(auto it : gr[i]){
                deg[it]++;
            }
        }

        vector<vector<int>>ans(n, vector<int>(n, 0));
        
        for(int i = 0; i < n; i++){
            int a = deg[i];
            for(int j = i+1; j < n; j++){
                int b = deg[j];
                if(gr[i].count(j) > 0){
                    ans[i][j] = a+b-1;
                }else{
                    ans[i][j] = a+b;
                }
            }
        }

        int ma = INT_MIN;
        for(auto it : ans){
            for(auto i : it){
                ma = max(ma, i);
            }
        }
        return ma;
    }
};
