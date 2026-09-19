// Leetcode
// 2220. Minimum Bit Flips to Convert Number -> Easy

class Solution {
public:
    int minBitFlips(int start, int goal) {
        string fir = "", sec = "";
    
        while(start > 0){
            int rem = start%2;
            start /= 2;
            fir += to_string(rem);
        }

        while(goal > 0){
            int rem = goal%2;
            goal /= 2;
            sec += to_string(rem);
        }

        if(fir.length() < sec.length()){
            int diff = sec.length()-fir.length();
            for(int i = 1; i <= diff; i++){
                fir += '0';
            }
        }else{
            int diff = (fir.length()-sec.length());
            for(int i = 1; i <= diff; i++){
                sec += '0';
            }
        }

        int ans = 0;
        for(int i = 0; i < fir.length(); i++){
            if(fir[i] != sec[i])ans++;
        }
        return ans;
    }
};
