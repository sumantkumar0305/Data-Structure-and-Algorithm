// Leetcode
// 53. Maximum Subarray -> Med.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int val = INT_MIN;
        int sum = 0;
        for(auto it : nums){
            sum += it;
            val = max(sum, val);
            if(sum < 0) sum = 0;
        }

        return val;
    }
};
