// LeetCode
// 785. Is Graph Bipartite? -> Med

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int>vec(v, -1);

        for(int i = 0; i < v; i++){
            queue<int>q;
            q.push(i);
            vec[0] = 0;
            
            while(q.size() > 0){
                int u = q.front();
                q.pop();

                for(auto it : graph[u]){
                    if(vec[it] == -1){
                        vec[it] = 1-vec[u];
                        q.push(it);
                    }else if(vec[it] == vec[u]){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
