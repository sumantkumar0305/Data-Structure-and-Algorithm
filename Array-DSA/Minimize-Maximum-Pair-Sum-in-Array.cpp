// Leetcode
// 1877. Minimize Maximum Pair Sum in Array -> Med.

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int st = 0, end = nums.size()-1;
        while(st < end){
            int sum = nums[st]+nums[end];
            ans = max(ans, sum);
            st++;end--;
        }

        return ans;
    }
};
