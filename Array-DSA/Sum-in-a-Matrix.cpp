// Leetcode
// 2679. Sum in a Matrix -> Med.

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for (auto &row : nums) {
            sort(row.begin(), row.end());
        }

        int ans = 0;
        for(int i = nums[0].size()-1; i >= 0; i--){
            int maxVal = INT_MIN;

            for(auto it : nums){
                maxVal = max(maxVal, it[i]);
            }
            ans += maxVal;
            cout<<ans<<endl;
        }

        return ans;
    }
};
