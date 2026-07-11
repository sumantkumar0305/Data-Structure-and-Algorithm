// Leetcode
// 2685. Count the Number of Complete Components -> Med.

class Solution {
    bool bfs(int i, vector<bool>&vis, vector<vector<int>>&edges){
        queue<int>q;
        int node = 0, edge = 0;
        q.push(i);
        vis[i] = true;

        while(q.size() > 0){
            int u = q.front();
            q.pop();
            node++;
            edge += edges[u].size();

            for(auto it : edges[u]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = true;
                }
            }
        }

        edge /= 2;

        return edge == (node*(node-1))/2; 
    }

    vector<vector<int>> create(int n, vector<vector<int>>&edges){
        vector<vector<int>>graph(n);

        for(auto it : edges){
            int u = it[0];
            int v = it[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        return graph;
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        edges = create(n ,edges);
        vector<bool>vis(n, false);

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                if(bfs(i, vis, edges))ans++;
            }
        }

        return ans;
    }
};
