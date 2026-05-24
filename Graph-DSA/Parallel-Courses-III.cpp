// Leetcode
// 2050. Parallel Courses III -> Hard

class Solution {
    vector<vector<int>> create(vector<vector<int>>& edge, int n) {
        vector<vector<int>> graph(n);

        for (auto &it : edge) {
            int u = it[0] - 1;
            int v = it[1] - 1;

            graph[u].push_back(v);
        }

        return graph;
    }

public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> graph = create(relations, n);

        vector<int> indeg(n, 0);

        for (int i = 0; i < n; i++) {
            for (auto v : graph[i]) {
                indeg[v]++;
            }
        }

        queue<int> q;
        vector<int> dp(n);

        for (int i = 0; i < n; i++) {
            dp[i] = time[i];

            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto v : graph[u]) {
                dp[v] = max(dp[v], dp[u] + time[v]);
                indeg[v]--;

                if (indeg[v] == 0) {
                    q.push(v);
                }
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};
