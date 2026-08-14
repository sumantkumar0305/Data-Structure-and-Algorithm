// Leetcode
// 3794. Reverse String Prefix -> Easy

class Solution {
public:
    string reversePrefix(string s, int k) {
        string subS = s.substr(0, k);
        reverse(subS.begin(), subS.end());

        for(int i = k; i < s.length(); i++){
            subS += s[i];
        }

        return subS;
    }
};
