// Leetcode
// 3701. Compute Alternating Sum -> Easy

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evenSum = 0;

        for(int i = 0; i < nums.size(); i=i+2){
            evenSum += nums[i];
        }

        int oddSum = 0;
        for(int i = 1; i < nums.size(); i=i+2){
            oddSum += nums[i];
        }

        return evenSum-oddSum;
    }
};
