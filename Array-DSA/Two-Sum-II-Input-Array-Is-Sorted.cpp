// Leetcode
// 167. Two Sum II - Input Array Is Sorted -> Med

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>un;

        for(int i = 0; i < nums.size(); i++){
            int tar = target-nums[i];
            if(un.count(tar)){
                return {un[tar]+1, i+1};
            }

            un[nums[i]] = i;
        }

        return {};
    }
};
