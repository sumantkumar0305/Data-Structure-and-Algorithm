// Leetcode
// 2278. Percentage of Letter in String -> Easy

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(auto it : s){
            if(it == letter) count++;
        }

        int per = (count*100)/s.length();

        return per;
    }
};
