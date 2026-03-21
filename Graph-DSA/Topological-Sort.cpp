//GFG
//Topological Sort -> Med

class Solution {
    vector<vector<int>>directed(vector<vector<int>>&vec, int node){
        vector<vector<int>> adj(node);

        for (auto it : vec){ //Graph Edge between u->v
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }

        return adj;
    }
    
    void topologicalSorting(int s, vector<bool>&visit, stack<int>&st, vector<vector<int>>&graph){
        visit[s] = true;
        vector<int>neighbour = graph[s];
    
        for(auto it : neighbour){
            if(!visit[it]){
                topologicalSorting(it, visit, st, graph);
            }
        }
    
        st.push(s);
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edge) {
        // code here
        edge = directed(edge, V);
        vector<bool>visit(V, false);
        
        stack<int>st;
        for(int i = 0; i < V; i++){
            if(!visit[i]){
                topologicalSorting(i, visit, st, edge);   
            }
        }
        
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};
