// Leetcode
// 1572. Matrix Diagonal Sum -> Easy

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, i = 0, j = 0;
        while(i < mat.size() && j < mat.size()){
            sum += mat[i][j];
            i++;
            j++;
        }
        i = 0;
        j = mat.size()-1;
        while(i < mat.size() && j >= 0){
            sum += mat[i][j];
            i++;
            j--;
        }

        i = mat.size();
        if(i%2 != 0){
            i /= 2;
            sum -= mat[i][i];
        }

        return sum;
    }
};
