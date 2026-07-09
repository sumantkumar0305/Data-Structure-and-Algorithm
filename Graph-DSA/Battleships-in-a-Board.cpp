// Leetcode
// 419. Battleships in a Board -> Med.

class Solution {
    void dfs(vector<vector<bool>>&vis, vector<vector<char>>& grid, int i, int j){
        vis[i][j] = true;

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
    int countBattleships(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>vis(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '.'){
                    vis[i][j] = true;
                }
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j]){
                    dfs(vis, grid, i, j);
                    ans++;
                }
            }
        }

        return ans;
    }
};
