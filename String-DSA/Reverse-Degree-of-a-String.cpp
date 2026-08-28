// Leetcode
// 3498. Reverse Degree of a String -> Easy

class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
    
        for(int i = 0; i < s.length(); i++){
            char it = s[i];
            int val = (26 - (it - 'a'))*(i+1);
            ans += val;
        }

        return ans;
    }
};
