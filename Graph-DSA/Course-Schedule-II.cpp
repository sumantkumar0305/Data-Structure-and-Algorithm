//LeetCode
//210. Course Schedule II -> Med

class Solution {
    vector<vector<int>>directed(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ //Graph Edge between u->v
            int v = it[0];
            int u = it[1];
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
    vector<int> findOrder(int v, vector<vector<int>>& graph) {
        graph = directed(graph, v);
        vector<int>indeg = indegree(graph, v);
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

            vector<int>neigh = graph[u];
            for(auto it : neigh){
                indeg[it]--;
                if(indeg[it] == 0){
                    qu.push(it);
                }
            }
        }

        for(int i = 0; i < v; i++){
            if(indeg[i] != 0){
                return {};
            }
        }

        return ans;
    }
};
