//LeetCode
//200. Number of Islands -> Med

class Solution {
int isIsland(int i, int j, vector<vector<bool>>&visit, vector<vector<char>>&grid, int n, int m){

    visit[i][j] = true;

    if(i-1 >= 0 && !visit[i-1][j]){
        isIsland(i-1, j, visit, grid, n, m);
    }

    if(i+1 < n && !visit[i+1][j]){
        isIsland(i+1, j, visit, grid, n, m);
    }

    if(j-1 >=0 && !visit[i][j-1]){
        isIsland(i, j-1, visit, grid, n, m);
    }

    if(j+1 < m && !visit[i][j+1]){
        isIsland(i, j+1, visit, grid, n, m);
    }

    return 1;
}

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>>visit(n, vector<bool>(m, true));
        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1') visit[i][j] = false;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visit[i][j]){
                    ans += isIsland(i, j, visit, grid, n, m);
                }
            }
        }

        return ans;
    }
};
