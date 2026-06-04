// Leetcode
// 48. Rotate Image -> Med.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix.size(); j++) {
                int val = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = val;
            }
        }

        int st = 0, end = matrix.size()-1;
        while(st < end){
            for(int i = 0; i < matrix.size(); i++){
                swap(matrix[i][st], matrix[i][end]);
            }
            st++;
            end--;
        }
    }
};
