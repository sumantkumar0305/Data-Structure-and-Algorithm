// leetcode
// 207. Course Schedule -> Med.

class Solution {
    vector<vector<int>>directed(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ 
            int u = it[1];
            int v = it[0];
            adj[u].push_back(v);
        }

        return adj;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indeg(numCourses, 0);
        queue<int>q;
        vector<vector<int>>graph = directed(prerequisites, numCourses);

        for(auto it : prerequisites){
            indeg[it[0]]++;
        }

        for(int i = 0; i < numCourses; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }

        while(q.size() > 0){
            int u = q.front();
            q.pop();

            for(auto it : graph[u]){
                indeg[it]--;
                if(indeg[it] == 0){
                    q.push(it);
                }
            }
        }

        for(auto it : indeg){
            if(it != 0) return false;
        }

        return true;
    }
};
