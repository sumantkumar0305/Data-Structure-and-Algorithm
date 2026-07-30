// Leetcode
// 125. Valid Palindrome -> Easy

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(auto it : s){
            if((int(it) >= 65 && int(it) <= 90) || (int(it) >= 97 && int(it) <= 122)){
                if(int(it) >= 65 && int (it) <= 90){
                    str += (it+32);
                }else{
                    str += it;
                }
            }else if(int(it) >= 48 && int(it) <= 57){
                str += it;
            }
        }

        int st = 0, end = str.length()-1;
        while(st < end){
            if(str[st] != str[end]) return false;
            st++;
            end--;
        }

        return true;
    }
};
