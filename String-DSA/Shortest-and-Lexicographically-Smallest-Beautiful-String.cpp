// Leetcode
// 2904. Shortest and Lexicographically Smallest Beautiful String -> Med.

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int len = INT_MAX;
        string ans = "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
        string temp = ans;

        for(int i = 0; i < s.length(); i++){
            for(int j = i+k-1; j < s.length(); j++){
                int count = 0;
                for(int m = i; m <= j; m++){
                    if(s[m] == '1')count++;
                }
                if(count == k){
                    int l = j-i+1;
                    string sub = s.substr(i, l);
                    if(l < len){
                        ans = sub;
                        len = l;
                    }else if(l == len){
                        ans = min(ans, sub);
                    }
                    
                }
            }
        }

        return ans == temp ? "":ans;
    }
};
