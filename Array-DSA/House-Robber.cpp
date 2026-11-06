// Leetcode
// 198. House Robber -> Med.

class Solution {
    int helper(vector<int>&num, int idx, vector<int>&dp){
        if(idx < 0)return 0;
        if(dp[idx] != -1)return dp[idx];

        dp[idx] = max(num[idx]+helper(num, idx-2, dp), helper(num, idx-1, dp));
        return dp[idx];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int>dp(n+1, -1);

        return helper(nums, n, dp);
    }
};
