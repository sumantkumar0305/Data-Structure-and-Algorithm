// Leetcode
// 796. Rotate String -> Easy


class Solution {
    string rotate(string str){
        int st = 0, end = str.length()-1;

        while(st != end){
            swap(str[st], str[end]);
            st++;
        }

        return str;
    } 
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;

        for(int i = 0; i < s.length(); i++){
            s = rotate(s);
            if(s == goal)return true;
        }

        return false;
    }
};
