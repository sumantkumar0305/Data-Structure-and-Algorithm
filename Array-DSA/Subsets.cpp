// Leetcode
// 78. Subsets -> Med.

class Solution {
    void helper(vector<int>&nums, vector<int>&temp, vector<vector<int>>&sub, int idx){
        sub.push_back(temp);
        for(int i = idx; i < nums.size(); i++){
            temp.push_back(nums[i]);
            helper(nums, temp, sub, i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sub;
        vector<int>temp;
        helper(nums, temp, sub, 0);

        return sub;
    }
};
