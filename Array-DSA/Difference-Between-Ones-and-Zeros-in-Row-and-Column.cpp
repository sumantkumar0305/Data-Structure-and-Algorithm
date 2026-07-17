// Leetcode
// 2482. Difference Between Ones and Zeros in Row and Column -> Med.

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<pair<int, int>>row(grid.size());
        for(int i = 0; i < grid.size(); i++){
            int one = 0, zero = 0;
            for(auto it : grid[i]){
                if(it == 1) one++;
                else zero++;
            }
            row[i] = {one, zero};
        }

        vector<pair<int,int>>col(grid[0].size());
        for(int j = 0; j < grid[0].size(); j++){
            int one = 0, zero = 0;
            for(int i = 0; i < grid.size(); i++){
                if(grid[i][j] == 1) one++;
                else zero++;
            }
            col[j] = {one, zero};
        }

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                int ans = row[i].first - row[i].second + col[j].first - col[j].second;
                grid[i][j] = ans;
            }
        }

        return grid;
    }
};
