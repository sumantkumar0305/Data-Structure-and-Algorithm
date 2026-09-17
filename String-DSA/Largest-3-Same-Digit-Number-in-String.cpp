// Leetcode
// 2264. Largest 3-Same-Digit Number in String -> Easy

class Solution {
public:
    string largestGoodInteger(string num) {
        char ans = ' ';

        for(int i = 2; i < num.length(); i++) {
            if(num[i] == num[i-1] && num[i] == num[i-2]) {
                ans = max(ans, num[i]);
            }
        }

        if(ans == ' ') return "";

        return string(3, ans);
    }
};
