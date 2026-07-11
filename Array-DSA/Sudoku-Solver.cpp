// Leetcode
// 37. Sudoku Solver -> Hard

class Solution {
    bool check(int row, int col, vector<vector<char>>&board, char val){
        int stRow = row - (row%3);
        int stCol = col - (col%3);

        for(int i = 0; i < 9; i++){
            if(board[row][i] == val) return false;
        }

        for(int i = 0; i < 9; i++){
            if(board[i][col] == val) return false;
        }

        for(int i = stRow; i <= stRow+2; i++){
            for(int j = stCol; j <= stCol+2; j++){
                if(board[i][j] == val) return false;
            }
        }

        return true;
    }

    bool helper(int row, int col, vector<vector<char>>&board){
        if(row == 9) return true;
        if(col == 9) return helper(row+1, 0, board);

        if(board[row][col] != '.') return helper(row, col+1, board);

        for(int i = 1; i <= 9; i++){
            char charVal = '0' + i;
            if(check(row, col, board, charVal)){
                board[row][col] = charVal;
                if(helper(row, col+1, board)){
                    return true;
                }

                board[row][col] = '.';
            }
        }

        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        helper(0, 0, board);
    }
};
