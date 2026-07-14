// Leetcode
// 51. N-Queens -> Hard

class Solution {
    bool check(vector<string>&vec, int n, int row, int col){
        for(int i = 0; i < n; i++){
            if(vec[row][i] == 'Q') return false;
        }

        for(int i = 0; i < n; i++){
            if(vec[i][col] == 'Q') return false;
        }

        int i = row, j = col;
        while(i >= 0 && j >= 0){
            if(vec[i][j] == 'Q') return false;
            i--;
            j--;
        }

        i = row, j = col;
        while(i >= 0 && j < n){
            if(vec[i][j] == 'Q') return false;
            i--;
            j++;
        }

        return true;
    }

    vector<vector<string>>ans;
    void helper(vector<string>&vec, int n, int row){
        if(row == n){
            ans.push_back(vec);
            return;
        }

        for(int i = 0; i < n; i++){
            if(check(vec, n, row, i)){
                vec[row][i] = 'Q';
                helper(vec, n, row+1);
                vec[row][i] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>vec(n, string(n, '.'));
        helper(vec, n, 0);

        return ans;
    }
};
