//GFG
//DFS of Graph -> Easy

class Solution {
    void Depth_First_Search(vector<int>&ans, vector<bool>&visited, int u, vector<vector<int>>&graph){
        visited[u] = true;
        ans.push_back(u);
    
        vector<int>neighbour = graph[u];
    
        for(auto it : neighbour){
            if(!visited[it]){
                Depth_First_Search(ans, visited, it, graph);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        vector<int>ans;
        vector<bool>visited(v, false);
        
        Depth_First_Search(ans, visited, 0, adj);
        
        return ans;
    }
};
