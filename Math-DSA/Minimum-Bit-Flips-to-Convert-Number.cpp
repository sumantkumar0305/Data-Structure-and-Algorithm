// Leetcode
// 2220. Minimum Bit Flips to Convert Number -> Easy

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        
        int ans = 0;
        while(x > 0){
            int rem = x%2;
            if(rem == 1)ans++;
            x /= 2;
        }

        return ans;
    }
};
