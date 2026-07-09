// Leetcode
// 695. Max Area of Island -> Med.

class Solution {
    int temp = 0;
    void dfs(vector<vector<bool>>&vis, vector<vector<int>>& grid, int i, int j){
        vis[i][j] = true;
        temp++;

        if(i-1 >= 0 && !vis[i-1][j]){
            dfs(vis, grid, i-1, j);
        }
        if(i+1 < grid.size() && !vis[i+1][j]){
            dfs(vis, grid, i+1, j);
        }
        if(j-1 >= 0 && !vis[i][j-1]){
            dfs(vis, grid, i, j-1);
        }
        if(j+1 < grid[0].size() && !vis[i][j+1]){
            dfs(vis, grid, i,  j+1);
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>vis(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0){
                    vis[i][j] = true;
                }
            }
        }

        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j]){
                    temp = 0;
                    dfs(vis, grid, i, j);
                    ans = max(ans, temp);
                }
            }
        }

        if(ans == INT_MIN) return 0;

        return ans;
    }
};
