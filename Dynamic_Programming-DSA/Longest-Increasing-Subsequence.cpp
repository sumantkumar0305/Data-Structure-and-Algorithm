// Leetcode
// 300. Longest Increasing Subsequence -> Med.

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return n;
        set<int>un(nums.begin(), nums.end());
        vector<int>temp(un.begin(), un.end());
        int m = temp.size();

        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(nums[i-1] == temp[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[n][m];
    }
};
