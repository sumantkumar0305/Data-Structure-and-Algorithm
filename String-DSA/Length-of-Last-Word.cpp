// Leetcode
// 58. Length of Last Word -> Easy

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length()-1;
        while(end >= 0 && s[end] == ' '){
            end--;
        }
        int ans = 0;
        while(end >= 0 && s[end] != ' '){
            ans++;
            end--;
        }

        return ans;
    }
};
