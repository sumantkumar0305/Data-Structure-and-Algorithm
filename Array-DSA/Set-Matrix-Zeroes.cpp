// Leetcode
// 73. Set Matrix Zeroes -> Med.

class Solution {
    void set(vector<vector<int>>& matrix, int row, int col){
        for(int i = 0; i < matrix[0].size(); i++){
            matrix[row][i] = 0;
        }

        for(int j = 0; j < matrix.size(); j++){
            matrix[j][col] = 0;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>>vec;

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0)vec.push_back({i,j});
            }
        }

        for(auto it : vec){
            set(matrix, it.first, it.second);
        }
    }
};
