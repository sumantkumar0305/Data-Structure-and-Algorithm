// Leetcode
// 3612. Process String with Special Operations I -> Med.

class Solution {
public:
    string processStr(string s) {
        string str = "";

        int i = 0;
        int count = 0;

        while(i < s.length()){
            char it = s[i];
            if(int(it) >= 97 && int(it) <= 122){
                str += it;
                count++;
            }else if(count > 0 && it == '*'){
                str.pop_back();
                count--;
            }else if(it == '#'){
                count += str.length();
                str += str;
            }else if(it == '%'){
                reverse(str.begin(), str.end());
            }
            i++;
        }

        return str;
    }
};
