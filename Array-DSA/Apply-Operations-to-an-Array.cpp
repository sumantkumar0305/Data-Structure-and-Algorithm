// Leetcode
// 2460. Apply Operations to an Array -> Easy

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                nums[i-1] *= 2;
                nums[i] = 0;
            }
        }

        int count = 0;
        vector<int>ans;
        for(auto it : nums){
            if(it == 0)count++;
            else ans.push_back(it);
        }

        for(int i = 0; i < count; i++){
            ans.push_back(0);
        }

        return ans;
    }
};
