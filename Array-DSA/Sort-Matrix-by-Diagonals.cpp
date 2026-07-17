// Leetcode
// 3446. Sort Matrix by Diagonals -> Med.

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            int k = i;
            int j = 0;
            vector<int>vec;
            while(k < grid.size()){
                vec.push_back(grid[k][j]);
                k++;
                j++;
            }
            sort(vec.begin(), vec.end(), greater<int>());
            k = i;
            j = 0;
            for(auto it : vec){
                grid[k][j] = it;
                k++;
                j++;
            }
        }

        for(int i = 1; i < grid.size(); i++){
            int k = i; 
            int j = 0;
            vector<int>vec;
            while(k < grid.size()){
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
