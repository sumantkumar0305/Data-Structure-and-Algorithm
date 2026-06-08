// Leetcode
// 1. Two Sum -> Easy

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>un;

        for(int i = 0; i < nums.size(); i++){
            int tar = target-nums[i];
            if(un.count(tar)){
                return {un[tar], i};
            }

            un[nums[i]] = i;
        }

        return {};
    }
};
