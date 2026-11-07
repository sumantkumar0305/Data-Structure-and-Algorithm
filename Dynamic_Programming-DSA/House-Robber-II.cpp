// Leetcode
// 213. House Robber II -> Med.

class Solution {
    int helper(vector<int>&num, int idx, int last, vector<int>&dp){
        if(idx < last)return 0;
        if(dp[idx] != -1)return dp[idx];

        dp[idx] = max(num[idx]+helper(num, idx-2, last, dp), helper(num, idx-1, last, dp));
        return dp[idx];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        if(n == 0)return nums[n];
        vector<int>dp(n+1, -1);
        int selectN = helper(nums, n, 1, dp);
        vector<int>dp2(n+1, -1);
        int notN = helper(nums, n-1, 0, dp2);

        return max(selectN, notN);
    }
};
