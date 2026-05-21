// Leetcode
// 3112. Minimum Time to Visit Disappearing Nodes -> Med

class Solution {
    vector<vector<pair<int, int>>>create(vector<vector<int>>&edges, int n){
        vector<vector<pair<int, int>>> graph(n);

        for(auto it : edges){
            int v = it[0];
            int u = it[1];
            int w = it[2];

            if(v == u){
                graph[v].push_back({u, w});
            }else{
                graph[v].push_back({u,w});
                graph[u].push_back({v, w});
            }
        }

        return graph;
    }
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        if(n < 2) return {0};

        vector<vector<pair<int, int>>>graph = create(edges, n);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq; //w, u
        vector<int>ans(n, 100001);
        
        pq.push({0, 0});
        ans[0] = 0;

        while(pq.size() > 0){
            // int u = pq.top().second;
            auto [c, u] = pq.top();
            pq.pop();

            if(ans[u] < c) continue;

            for(auto it : graph[u]){
                int val = it.second+ans[u];

                if(val < disappear[it.first] && val < ans[it.first]){
                    ans[it.first] = val;
                    pq.push({val, it.first});
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(ans[i] == 100001){
                ans[i] = -1;
            }
        }

        return ans;
    }
};
