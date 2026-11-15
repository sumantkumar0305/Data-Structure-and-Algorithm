// Leetcode
// 712. Minimum ASCII Delete Sum for Two Strings -> Med.

class Solution {
    int rec(string s1, string s2, int i, int j){
        if(i < 0 || j < 0){
            int sum = 0;
            for(int k = 0; k <= i; k++){
                sum += int(s1[k]);
            }

            for(int k = 0; k <= j; k++){
                sum += int(s2[k]);
            }
            return sum;
        }

        if(s1[i] == s2[j]){
            return rec(s1, s2, i-1, j-1);
        }

        int left = int(s1[i])+rec(s1, s2, i-1, j);
        int right = int(s2[j])+rec(s1, s2, i, j-1);

        return min(left, right);
    }

    int rec_mem(string& s1, string& s2, int i, int j, vector<vector<int>>&dp){
        if(i < 0 || j < 0){
            int sum = 0;
            for(int k = 0; k <= i; k++){
                sum += s1[k];
            }

            for(int k = 0; k <= j; k++){
                sum += s2[k];
            }
            return sum;
        }

        if(dp[i][j] != -1)return dp[i][j];

        if(s1[i] == s2[j]){
            return dp[i][j] = rec_mem(s1, s2, i-1, j-1, dp);
        }

        int left = int(s1[i])+rec_mem(s1, s2, i-1, j, dp);
        int right = int(s2[j])+rec_mem(s1, s2, i, j-1, dp);

        return dp[i][j] = min(left, right);
    }

    int rec_tab(string s1, string s2){
        int n = s1.length(), m = s2.length();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

        for(int i = 1; i <= n; i++){
            dp[i][0] = dp[i-1][0] + s1[i-1];
        }

        for(int j = 1; j <= m; j++){
            dp[0][j] = dp[0][j-1] + s2[j-1];
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    int left = int(s1[i-1]) + dp[i-1][j];
                    int right = int(s2[j-1])+dp[i][j-1];

                    dp[i][j] = min(left, right);
                }
            }
        }

        return dp[n][m];
    }

public:
    int minimumDeleteSum(string s1, string s2) {
        return rec_tab(s1, s2);
    }
};
