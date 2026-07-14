// Leetcode
// 52. N-Queens II -> Hard

class Solution {
    bool check(vector<string>&vec, int n, int row, int col){
        for(int i = 0; i < n; i++){
            if(vec[row][i] == 'q') return false;
        }

        for(int i = 0; i < n; i++){
            if(vec[i][col] == 'q') return false;
        }

        int i = row, j = col;
        while(i >= 0 && j >= 0){
            if(vec[i][j] == 'q') return false;
            i--;
            j--;
        }

        i = row, j = col;
        while(i >= 0 && j < n){
            if(vec[i][j] == 'q') return false;
            i--;
            j++;
        }

        return true;
    }

    int ans = 0;
    void helper(vector<string>&vec, int n, int row){
        if(row == n){
            ans++;
            return;
        }

        for(int i = 0; i < n; i++){
            if(check(vec, n, row, i)){
                vec[row][i] = 'q';
                helper(vec, n, row+1);
                vec[row][i] = '.';
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<string>vec(n, string(n, '.'));
        helper(vec, n, 0);

        return ans;
    }
};
