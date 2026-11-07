// GFG
// Frog Jump -> Med. 

class Solution {
   int helper(vector<int>&val, int idx, int n, vector<int>&dp){
       if(idx == n-1)return 0;
       if(dp[idx] != -1)return dp[idx];

       int left = INT_MAX, right = INT_MAX;

       if(idx < n-1){
           left = abs(val[idx]-val[idx+1])+helper(val, idx+1, n, dp);
       }

       if(idx < n-2){
           right = abs(val[idx]-val[idx+2])+helper(val, idx+2, n, dp);
       }

       dp[idx] = min(left, right);

       return dp[idx];
   }
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int>dp(n, -1);

        return helper(height, 0, n, dp);
    }
};
