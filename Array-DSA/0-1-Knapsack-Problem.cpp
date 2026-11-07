// GFG
// 0 - 1 Knapsack Problem -> Med.

class Solution {
    int rec(int w, vector<int>&val, vector<int>&wt, int idx, vector<vector<int>>&dp){
        if(idx < 0 || w == 0)return 0;
        if(dp[idx][w] != -1)return dp[idx][w];

        int left = INT_MIN, right = INT_MIN;
        if(wt[idx] <= w){
            right = max(val[idx]+rec(w-wt[idx], val, wt, idx-1, dp), rec(w, val, wt, idx-1, dp));
        }else left = rec(w, val, wt, idx-1, dp);

        dp[idx][w] = max(left, right);
        return dp[idx][w];
    }
    
   
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size()-1;
        vector<vector<int>>dp(n+1, vector<int>(W+1, -1));

        return rec(W, val, wt, n, dp);
    }
};
