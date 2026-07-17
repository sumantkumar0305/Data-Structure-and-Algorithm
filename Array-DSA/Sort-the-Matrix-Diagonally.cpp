// Leetcode
// 1329. Sort the Matrix Diagonally -> Med.

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            int k = i;
            int j = 0;
            vector<int>vec;
            while(k < grid.size() && j < grid[0].size()){
                vec.push_back(grid[k][j]);
                k++;
                j++;
            }
            sort(vec.begin(), vec.end());
            k = i;
            j = 0;
            for(auto it : vec){
                grid[k][j] = it;
                k++;
                j++;
            }
        }

        for(int i = 1; i < grid[0].size(); i++){
            int k = i; 
            int j = 0;
            vector<int>vec;
            while(k < grid[0].size() && j < grid.size()){
                vec.push_back(grid[j][k]);
                k++;
                j++;
            }
            sort(vec.begin(), vec.end());
            k = i;
            j = 0;
            for(auto it : vec){
                grid[j][k] = it;
                k++;
                j++;
            }
        }

        return grid;
    }
};
