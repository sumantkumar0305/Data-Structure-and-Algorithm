// Leetcode
// 415. Add Strings -> Easy

class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";

        int endFir = num1.length()-1, endSec = num2.length()-1;

        int rem = 0;
        while(endFir >= 0 && endSec >= 0){
            int fir = num1[endFir]-'0', sec = num2[endSec]-'0';
            fir += sec;
            fir += rem;
            rem = fir/10;
            fir %= 10;
            ans = to_string(fir) + ans;
            endFir--;
            endSec--;
        }

        while(endFir >= 0){
            int fir = num1[endFir]-'0';
            fir += rem;
            rem = fir/10;
            fir %= 10;
            ans = to_string(fir) + ans;
            endFir--;
        }

        while(endSec >= 0){
            int fir = num2[endSec]-'0';
            fir += rem;
            rem = fir/10;
            fir %= 10;
            ans = to_string(fir) + ans;
            endSec--;
        }
        if(rem != 0){
            ans = to_string(rem) + ans;
        }

        return ans;
    }
};
