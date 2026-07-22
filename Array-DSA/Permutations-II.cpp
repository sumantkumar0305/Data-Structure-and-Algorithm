// Leetcode
// 47. Permutations II -> Med.

class Solution {
    void getPr(vector<int>&nums, int idx, vector<vector<int>>&ans){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_set<int>un;

        for(int i = idx; i < nums.size(); i++){
            if(un.count(nums[i]))continue;
            un.insert(nums[i]);
            swap(nums[idx], nums[i]);
            getPr(nums, idx+1, ans);
            swap(nums[idx], nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        getPr(nums, 0, ans);

        return ans;
    }
};
