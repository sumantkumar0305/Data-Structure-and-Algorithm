// Leetcode
// 54. Spiral Matrix -> Med.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int stRow = 0, endRow = matrix.size()-1;
        int stCol = 0, endCol = matrix[0].size()-1;

        while((stRow <= endRow) && (stCol <= endCol)){
            for(int i = stCol; i <= endCol; i++){
                ans.push_back(matrix[stRow][i]);
            }
            stRow++;
            if(stRow > endRow) break;
            for(int i = stRow; i <= endRow; i++){
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;
            if(endCol < stCol) break;
            for(int i = endCol; i >= stCol; i--){
                ans.push_back(matrix[endRow][i]);
            }            
            endRow--;
            if(endRow < stRow) break;
            for(int i = endRow; i >= stRow; i--){
                ans.push_back(matrix[i][stCol]);
            }
            stCol++;
            if(stCol > endCol) break;
        }

        return ans;
    }
};
