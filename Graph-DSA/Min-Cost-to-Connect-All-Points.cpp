// Leetcode
// 1584. Min Cost to Connect All Points -> Med.

class Solution {
    vector<vector<pair<int, int>>> create(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<pair<int, int>>> graph(n);

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int dist = abs(points[i][0] - points[j][0]) +
                        abs(points[i][1] - points[j][1]);

                graph[i].push_back({j, dist});
                graph[j].push_back({i, dist});
            }
        }

        return graph;
    }

    int MST(vector<vector<pair<int,int>>>&graph, int n){
        vector<bool>vis(n, false);
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        pq.push({0, 0});
        int ans = 0;
        while(pq.size() > 0){
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();

            if(!vis[u]){
                vis[u] = true;
                ans += cost;
                for(auto it : graph[u]){
                    pq.push({it.second, it.first});
                }
            }
        }

        return ans;
    }
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<pair<int,int>>> graph = create(points);

        return MST(graph, n);
    }
};
