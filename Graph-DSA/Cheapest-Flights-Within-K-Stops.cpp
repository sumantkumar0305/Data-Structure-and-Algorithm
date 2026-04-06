// LeetCode
// 787. Cheapest Flights Within K Stops -> Med

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> g(n);
        for (auto &it : flights) {
            g[it[0]].push_back({it[1], it[2]});
        }

        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;
        pq.push({0, src, 0}); // {cost, node, edges used}

        vector<vector<int>> dist(n, vector<int>(k + 2, INT_MAX));
        dist[src][0] = 0;

        while (!pq.empty()) {
            auto [cost, u, edges] = pq.top();
            pq.pop();

            if (u == dst) return cost;
            if (edges == k + 1) continue;

            for (auto &[v, wt] : g[u]) {
                int newCost = cost + wt;

                if (newCost < dist[v][edges + 1]) {
                    dist[v][edges + 1] = newCost;
                    pq.push({newCost, v, edges + 1});
                }
            }
        }

        return -1;
    }
};
