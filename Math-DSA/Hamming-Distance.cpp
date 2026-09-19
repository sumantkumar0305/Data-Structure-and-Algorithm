// Leetcode
// 461. Hamming Distance -> Easy

class Solution {
public:
    int hammingDistance(int start, int goal) {
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
