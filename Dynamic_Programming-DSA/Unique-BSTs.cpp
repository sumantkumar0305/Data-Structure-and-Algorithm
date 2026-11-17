// GFG
// Unique BSTs -> Med.

class Solution {
  public:
    int numTrees(int n) {
        // code here
        if(n == 0 || n == 1)return 1;
        vector<int>dp(n+1);
        dp[0] = dp[1] = 1;

        for(int i = 2; i <= n; i++){
            int j = 0, k = i-1;
            int mul = 0;
            while(j < i && k >= 0){
                mul = mul + dp[j]*dp[k];
                j++;
                k--;
            }
            dp[i] = mul;
        }

        return dp[n];
    }
};
