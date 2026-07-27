// Leetcode
// 1464. Maximum Product of Two Elements in an Array -> Easy

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int pr = (nums[0]-1);
        pr *= (nums[1]-1);

        return pr;
    }
};
