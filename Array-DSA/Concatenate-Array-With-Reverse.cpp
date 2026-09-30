// Leetcode
// 3925. Concatenate Array With Reverse -> Easy

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i = n; i >= 0; i--){
            nums.push_back(nums[i]);
        }

        return nums;
    }
};
