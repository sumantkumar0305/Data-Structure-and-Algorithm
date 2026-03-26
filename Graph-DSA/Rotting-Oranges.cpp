//LeetCode
//994. Rotting Oranges -> Med


class Solution {
    int isBFS(queue<pair<int,int>>& q, vector<vector<int>>& grid, int n, int m) {
        int ans = 0;

        while (!q.empty()) {
            int size = q.size();
            bool changed = false;

            for (int k = 0; k < size; k++) {
                pair<int, int> p = q.front();
                q.pop();

                if (p.first - 1 >= 0 && grid[p.first - 1][p.second] == 1) {
                    grid[p.first - 1][p.second] = 2;
                    q.push({p.first - 1, p.second});
                    changed = true;
                }

                if (p.first + 1 < n && grid[p.first + 1][p.second] == 1) {
                    grid[p.first + 1][p.second] = 2;
                    q.push({p.first + 1, p.second});
                    changed = true;
                }

                if (p.second - 1 >= 0 && grid[p.first][p.second - 1] == 1) {
                    grid[p.first][p.second - 1] = 2;
                    q.push({p.first, p.second - 1});
                    changed = true;
                }

                if (p.second + 1 < m && grid[p.first][p.second + 1] == 1) {
                    grid[p.first][p.second + 1] = 2;
                    q.push({p.first, p.second + 1});
                    changed = true;
                }
            }

            if (changed) ans++;
        }

        return ans;
    }

public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        // Push all initially rotten oranges into queue
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        int ans = isBFS(q, grid, n, m);

        // Check if any fresh orange is left
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) return -1;
            }
        }

        return ans;
    }
};
