// Leetcode
// 3110. Score of a String -> Easy

class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;

        for(int i = 0; i < s.length()-1; i++){
            ans += abs(int(s[i])-int(s[i+1]));
        }

        return ans;
    }
};
