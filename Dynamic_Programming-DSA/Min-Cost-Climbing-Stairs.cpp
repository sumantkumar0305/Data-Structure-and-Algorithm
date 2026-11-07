// Leetcode
// 746. Min Cost Climbing Stairs -> Easy

class Solution {
    int helper(vector<int>&cost, int idx, vector<int>&dp){
        if(idx >= cost.size())return 0;
        if(dp[idx] != -1)return dp[idx];

        dp[idx] = cost[idx] + min(helper(cost, idx+1, dp), helper(cost, idx+2, dp));

        return dp[idx];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1, -1);
        int withZero = helper(cost, 0, dp);
        int withOne = helper(cost, 1, dp);

        return min(withOne, withZero);
    }
};
