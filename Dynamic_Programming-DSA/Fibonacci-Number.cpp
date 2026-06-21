// Leetcode
// 509. Fibonacci Number -> Easy

class Solution {
    int rec(int n, vector<int>&dp){
        if(n == 0 || n == 1) return n;

        if(dp[n] != -1) return dp[n];

        return dp[n] = rec(n-1, dp)+rec(n-2, dp);
    }
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        vector<int>dp(n+1, -1);
                        
        rec(n , dp);

        return dp[n];
    }
};


// 2nd Approach
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        vector<int>dp(n+1, 0);

        dp[1] = 1;

        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};
