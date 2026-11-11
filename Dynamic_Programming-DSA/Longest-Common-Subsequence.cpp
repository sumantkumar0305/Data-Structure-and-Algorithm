// Leetcode
// 1143. Longest Common Subsequence -> Med.

class Solution {
    int lcs_rec(string str1, string str2, int i, int j){
        if(i < 0 || j < 0)return 0;

        if(str1[i] == str2[j])return 1+lcs_rec(str1, str2, i-1, j-1);

        return max(lcs_rec(str1, str2, i-1, j), lcs_rec(str1, str2, i, j-1));
    }

    int lcs_memoization(string str1, string str2, int i, int j, vector<vector<int>>&dp){
        if(i <= 0 || j <= 0)return 0;
        if(dp[i][j] != -1)return dp[i][j];

        if(str1[i-1] == str2[j-1]){
            dp[i][j] = 1+lcs_memoization(str1, str2, i-1, j-1, dp);
            return dp[i][j];
        }

        dp[i][j] = max(lcs_memoization(str1, str2, i-1, j, dp), lcs_memoization(str1, str2, i, j-1, dp));
        return dp[i][j];
    }

    int lcs_tabulution(string text1, string text2){
        int n = text1.size(), m = text2.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[n][m];
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        return lcs_tabulution(text1, text2);
    }
};
