// Leetcode
// 72. Edit Distance -> Med.

class Solution {
    int rec(string word1, string word2, int i, int j){
        if(i < 0 || j < 0)return abs(i-j);

        if(word1[i] == word2[j]){
            return rec(word1, word2, i-1, j-1);
        }

        return 1+min({rec(word1, word2, i-1, j), rec(word1, word2, i, j-1), rec(word1, word2, i-1, j-1)});
    }

    int rec_mem(string word1, string word2, int i, int j, vector<vector<int>>&dp){
        if(i < 0 || j < 0)return abs(i-j);

        if(dp[i][j] != -1)return dp[i][j];

        if(word1[i] == word2[j]){
            return dp[i][j] = rec_mem(word1, word2, i-1, j-1, dp);
        }

        return dp[i][j] = 1+min({rec_mem(word1, word2, i-1, j, dp), rec_mem(word1, word2, i, j-1, dp), rec_mem(word1, word2, i-1, j-1, dp)});
    }

    int rec_tab(string word1, string word2){
        int n = word1.length(), m = word2.length();

        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));

        for(int i = 0; i <= n; i++){
            dp[i][0] = i;
        }
        for(int j = 0; j <= m; j++){
            dp[0][j] = j;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = 1+min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
            }
        }

        return dp[n][m];
    }
public:
    int minDistance(string word1, string word2) {
        return rec_tab(word1, word2);
    }
};
