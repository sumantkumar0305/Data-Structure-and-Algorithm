// LeetCode
// 802. Find Eventual Safe States -> Med

class Solution {
    vector<vector<int>>undirected_unweighted(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for(int i = 0; i < node; i++){
            for(auto it : vec[i]){
                adj[it].push_back(i);
            }
        }

        return adj;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        graph = undirected_unweighted(graph, n);
        vector<int>indeg(n, 0);

        for(int i = 0; i < n; i++){
            for(auto it : graph[i]){
                indeg[it]++;
            }
        }

        vector<int>ans;
        queue<int>q;

        for(int i = 0; i < n; i++){
            if(indeg[i] == 0){
                q.push(i);
                ans.push_back(i);
            }
        }

        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            for(auto it : graph[curr]){
                indeg[it]--;
                if(indeg[it] == 0){
                    q.push(it);
                    ans.push_back(it);
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
