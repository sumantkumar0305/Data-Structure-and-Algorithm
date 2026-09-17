// Leetcode
// 1021. Remove Outermost Parentheses -> Easy

class Solution {
    string deleteP(string str, int l, int r){
        string ans = "";
        for(int i = l+1; i < r; i++){
            ans += str[i];
        }

        return ans;
    }
public:
    string removeOuterParentheses(string s) {
        string forward = "", backward = "";
        int l = 0;
        string ans ="";

        for(int r = 0; r < s.length(); r++){
            if(s[r] == '('){
                forward += '(';
            }else {
                backward += ')';
            }

            if(forward.length() == backward.length()){
                ans += deleteP(s, l, r);
                forward = "";
                backward = "";
                l = r+1;
            }
        }

        return ans;
    }
};
