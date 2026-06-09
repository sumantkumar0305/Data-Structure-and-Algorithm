// Leetcode
// 9. Palindrome Number -> Easy

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        if(str.length() == 1) return true;

        int st = 0, end = str.length()-1;

        while(st < end){
            if(str[st] != str[end]) return false;
            st++;
            end--;
        }

        return true;
    }
};
