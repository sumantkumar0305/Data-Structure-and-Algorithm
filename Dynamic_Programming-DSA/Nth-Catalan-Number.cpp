// GFG
// Nth Catalan Number -> Med.

class Solution {
    int rec_mem(int n, vector<int>&dp){
        if(n == 0 || n == 1)return 1;
        if(dp[n] != -1)return dp[n];

        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = ans + findCatalan(i)*findCatalan(n-i-1);
        }

        return dp[n] = ans;
    }
    
    int rec_tab(int n){
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
  public:
    int findCatalan(int n) {
        // code here
        return rec_tab(n);
    }
};
