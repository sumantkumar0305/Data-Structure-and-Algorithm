// Leetcode
// 1979. Find Greatest Common Divisor of Array -> Easy

class Solution {
    int gcd(int a, int b){
        if(b == 0) return a;

        return gcd(b, a%b);
    }
public:
    int findGCD(vector<int>& nums) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        for(auto it : nums){
            minVal = min(minVal, it);
            maxVal = max(maxVal, it);
        }

        return gcd(minVal, maxVal);
    }
};
