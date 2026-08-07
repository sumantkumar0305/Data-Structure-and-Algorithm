// Leetcode
// 1462. Course Schedule IV -> Med.

class Solution {
    vector<vector<int>>directed_unweighted(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ 
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        return adj;
    }

    bool find(vector<vector<int>>&graph, int src, int end, int n){
        queue<int>q;
        q.push(src);
        vector<bool>vis(n, false);
        vis[src] = true;

        while(q.size() > 0){
            int u = q.front();
            q.pop();
            if(end == u) return true;
            for(auto it : graph[u]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }

        return false;
    }
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        prerequisites = directed_unweighted(prerequisites, numCourses);
        vector<bool>ans;

        for(auto it : queries){
            ans.push_back(find(prerequisites, it[0], it[1], numCourses));
        }

        return ans;
    }
};
