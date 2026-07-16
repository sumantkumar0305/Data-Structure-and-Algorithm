// Leetcode
// 59. Spiral Matrix II -> Med.

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n));
        int stRow = 0, endRow = n-1;
        int stCol = 0, endCol = n-1;
        int val = 1;

        while((stRow <= endRow) && (stCol <= endCol)){
            for(int i = stCol; i <= endCol; i++){
                ans[stRow][i] = val;
                val++; 
            }
            stRow++;
            if(stRow > endRow) break;
            for(int i = stRow; i <= endRow; i++){
                ans[i][endCol] = val;
                val++;
            }
            endCol--;
            if(endCol < stCol) break;
            for(int i = endCol; i >= stCol; i--){
                ans[endRow][i] = val;
                val++;
            }            
            endRow--;
            if(endRow < stRow) break;
            for(int i = endRow; i >= stRow; i--){
                ans[i][stCol] = val;
                val++;
            }
            stCol++;
            if(stCol > endCol) break;
        }

        return ans;
    }
};
