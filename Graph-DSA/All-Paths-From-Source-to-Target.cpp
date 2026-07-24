// Leetcode
// 797. All Paths From Source to Target -> Med.

class Solution {
    vector<vector<int>>ans;
    void dfs(vector<vector<int>>&graph, int n, vector<bool>&vis, vector<int>&temp){
        if(n == graph.size()-1){
            ans.push_back(temp);
            return;
        }

        for(auto it : graph[n]){
            if(!vis[it]){
                temp.push_back(it);
                dfs(graph, it, vis, temp);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int size = graph.size();
        vector<bool>vis(size, false);
        vector<int>temp;

        temp.push_back(0);

        dfs(graph, 0, vis, temp);
    
        return ans;
    }
};
