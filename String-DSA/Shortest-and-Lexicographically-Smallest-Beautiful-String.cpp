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


// Optimized code
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int count = 0;
        int len = INT_MAX;
        string ans = "";

        for (int right = 0; right < s.length(); right++) {
            if (s[right] == '1') {
                count++;
            }

            while (count > k || (left <= right && s[left] == '0')) {
                if (s[left] == '1') {
                    count--;
                }
                left++;
            }

            if (count == k) {
                int l = right - left + 1;
                string sub = s.substr(left, l);
                
                if (l < len) {
                    len = l;
                    ans = sub;
                } else if (l == len) {
                    ans = min(ans, sub); 
                }
            }
        }

        return ans;
    }
};
