// LeetCode
// 547. Number of Provinces -> Med

class Solution {
    vector<vector<int>>graph(int v, vector<vector<int>>&edge){
        vector<vector<int>>g(v);

        for(int i = 0; i < v; i++){

            for(int j = 0; j < edge[i].size(); j++){
                if(edge[i][j] == 1)
                    g[i].push_back(j);
                }
            }
        return g;
    }

    void BFS(vector<bool>&visit, vector<vector<int>>&graph, int u){
        queue<int>q;
        q.push(u);
        visit[u] = true;

        while(q.size() > 0){
            int v = q.front();
            q.pop();

            for(auto it : graph[v]){
                if(!visit[it]){
                    q.push(it);
                    visit[it] = true;
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<vector<int>>g = graph(v, isConnected);

        int ans = 0;
        vector<bool>visit(v, false);

        for(int i = 0; i < v; i++){
            if(!visit[i]){
                ans++;
                BFS(visit, g, i);
            }
        }    

        return ans;
    }
};
