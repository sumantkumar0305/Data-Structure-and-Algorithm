// Leetcode
// 2373. Largest Local Values in a Matrix -> Easy

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int rows = grid.size();
        int cols = grid[0].size();
        for (int row = 0; row + 2 < rows; row++) {
            vector<int> temp;
            for (int col = 0; col + 2 < cols; col++) {

                int largestVal = INT_MIN;
                for (int i = row; i <= row + 2; i++) {
                    for (int j = col; j <= col + 2; j++) {
                        largestVal = max(largestVal, grid[i][j]);
                    }
                }
                temp.push_back(largestVal);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
