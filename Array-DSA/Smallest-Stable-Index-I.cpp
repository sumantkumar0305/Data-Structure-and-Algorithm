// Leetcode
// 3903. Smallest Stable Index I -> Easy

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            int minVal = INT_MAX;
            for(int j = i; j < nums.size(); j++){
                minVal = min(minVal, nums[j]);
            }

            int maxVal = INT_MIN;
            for(int j = 0; j <= i; j++){
                maxVal = max(maxVal, nums[j]);
            }

            if((maxVal-minVal) <= k) return i;
        }

        return -1;
    }
};
