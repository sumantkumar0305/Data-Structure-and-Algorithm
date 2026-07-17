// Leetcode
// 807. Max Increase to Keep City Skyline -> Med.

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>rowMax, colMax;

        for(auto it : grid){
            int maxVal = INT_MIN;
            for(auto i : it){
                maxVal = max(maxVal, i);
            }
            rowMax.push_back(maxVal);
        }
        
        for(int i = 0; i < grid.size(); i++){
            int maxVal = INT_MIN;
            for(int j = 0; j < grid.size(); j++){
                maxVal = max(maxVal, grid[j][i]);
            }
            colMax.push_back(maxVal);
        }

        int sum = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid.size(); j++){
                sum += min(rowMax[i], colMax[j]) - grid[i][j];
            }
        }

        return sum;
    }
};
