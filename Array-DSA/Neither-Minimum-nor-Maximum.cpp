// Leetcode
// 2733. Neither Minimum nor Maximum -> Easy

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        for(auto it : nums){
            minVal = min(minVal, it);
            maxVal = max(maxVal, it);
        }

        for(auto it : nums){
            if(it != minVal && it != maxVal) return it;
        }

        return -1;
    }
};
