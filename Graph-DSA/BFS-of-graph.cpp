//GFG
//BFS of graph -> Easy

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &graph) {
        // code here
        queue<int>q;
        int v = graph.size();
        vector<bool>visit(v, false);
        vector<int>ans;
        int u = 0;
    
        q.push(u);
        visit[u] = true;
    
        while(q.size() > 0){
            u = q.front();
            q.pop();
    
            ans.push_back(u);
            vector<int>neighbour = graph[u];
            for(auto it : neighbour){
                if(!visit[it]){
                    q.push(it);
                    visit[it]= true;
                }
            }
        }
        
        return ans;
    }
};
