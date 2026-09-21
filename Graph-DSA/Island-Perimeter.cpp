// Leetcode
// 463. Island Perimeter -> Easy

class Solution {
    int permiter(vector<vector<int>>& grid, vector<vector<bool>>&visit, int row, int col, int n, int m){
        queue<pair<int, int>>q;
        int ans = 0;

        q.push({row, col});
        visit[row][col] = true;

        while(q.size() > 0){
            auto it = q.front();
            q.pop();
            ans += 4;

            if(it.first-1 >= 0 && grid[it.first-1][it.second] == 1){
                ans--;
                if(!visit[it.first-1][it.second]){
                    visit[it.first-1][it.second] = true;
                    q.push({it.first-1, it.second});
                }
            }

            if(it.first+1 < n && grid[it.first+1][it.second] == 1){
                ans--;
                if(!visit[it.first+1][it.second]){
                    visit[it.first+1][it.second] = true;
                    q.push({it.first+1, it.second});
                }
            }

            if(it.second-1 >= 0 && grid[it.first][it.second-1] == 1){
                ans--;
                if(!visit[it.first][it.second-1]){
                    visit[it.first][it.second-1] = true;
                    q.push({it.first, it.second-1});
                }
            }

            if(it.second+1 < m && grid[it.first][it.second+1] == 1){
                ans--;
                if(!visit[it.first][it.second+1]){
                    visit[it.first][it.second+1] = true;
                    q.push({it.first, it.second+1});
                }
            }
        }

        return ans;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        vector<vector<bool>>visit(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0)visit[i][j] = true;
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visit[i][j]){
                    ans += permiter(grid, visit, i, j, n, m);
                }
            }
        }

        return ans;
    }
};
