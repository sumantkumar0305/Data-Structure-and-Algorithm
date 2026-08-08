// Leetcode
// 90. Subsets II -> Med.

class Solution {
    void helper(vector<int>&nums, vector<int>&temp, vector<vector<int>>&sub, int idx){
        sub.push_back(temp);
        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            helper(nums, temp, sub, i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>sub;
        vector<int>temp;
        sort(nums.begin(), nums.end());
        helper(nums, temp, sub, 0);

        return sub;
    }
};
