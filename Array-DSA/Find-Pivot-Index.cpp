// Leetcode
// 724. Find Pivot Index -> Easy

class Solution {
    int leftSum(vector<int>nums, int idx){
        if(idx == 0) return 0;
        int sum = 0;
        for(int i = 0; i < idx; i++){
            sum += nums[i];
        }

        return sum;
    }

    int rightSum(vector<int>nums, int idx){
        if(idx == nums.size()-1) return 0;
        int sum = 0;
        for(int i = idx+1; i < nums.size(); i++){
            sum += nums[i];
        }

        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(leftSum(nums, i) == rightSum(nums, i)) return i;
        }

        return -1;
    }
};
