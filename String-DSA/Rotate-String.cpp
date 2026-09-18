// Leetcode
// 796. Rotate String -> Easy


class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())return false;
        if(s == goal)return true;
        
        for(int i = 0; i < s.length(); i++){
            char ch = s[s.length()-1];
            s = ch + s;
            s.pop_back();

            if(s == goal)return true;
        }

        return false;
    }
};
