// Leetcode
// 1260. Shift 2D Grid -> Easy

class Solution {
    vector<vector<int>>helper(vector<vector<int>>&vec){
        vector<vector<int>>ans(vec.size(), vector<int>(vec[0].size()));

        for(int i = 0; i < vec.size(); i++){
            for(int j = 0; j < vec[0].size(); j++){
                if((j == vec[0].size()-1) && (i == vec.size()-1)){
                    ans[0][0] = vec[i][j];
                }else if(j == vec[0].size()-1){
                    ans[i+1][0] = vec[i][j];
                }else{
                    ans[i][j+1] = vec[i][j];
                }
            }
        }

        return ans;
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for(int i = 1; i <= k; i++){
            grid = helper(grid);
        }

        return grid;
    }
};
