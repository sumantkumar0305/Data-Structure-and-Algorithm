// LeetCode
// 419. Battleships in a Board -> Med

class Solution {
    int dfs(int i, int j, vector<vector<bool>>&visit, vector<vector<char>>&board, int n, int m){
    visit[i][j] = true;

    if(i-1 >= 0 && !visit[i-1][j]){
        dfs(i-1, j, visit, board, n, m);
    }

   if(i+1 < n && !visit[i+1][j]){
        dfs(i+1, j, visit, board, n, m);
    }

    if(j-1 >= 0 && !visit[i][j-1]){
        dfs(i, j-1, visit, board, n, m);
    }

    if(j+1 < m && !visit[i][j+1]){
        dfs(i, j+1, visit, board, n, m);
    }

    return 1;
}

public:
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<bool>>visit(n, vector<bool>(m, true));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 'X') visit[i][j] = false;
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visit[i][j]){
                    ans += dfs(i, j, visit, board, n, m);
                }
            }
        }

        return ans;
    }
};
