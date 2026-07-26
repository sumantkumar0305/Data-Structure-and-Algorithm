// Leetcode
// 628. Maximum Product of Three Numbers -> Easy

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int neg = 1;
        neg *= nums[0];
        neg *= nums[nums.size()-1];
        neg *= nums[nums.size()-2];
        int pos = nums[0];
        pos *= nums[1];
        pos *= nums[2];

        return max(neg, pos);
    }
};
