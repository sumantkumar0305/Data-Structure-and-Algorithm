// Leetcode
// 2760. Longest Even Odd Subarray With Threshold -> Easy

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] <= threshold && nums[i]%2 == 0){
                int sum = 1;
                for(int j = i+1; j < n; j++){
                    if(nums[j] <= threshold && ((nums[j]%2) != (nums[j-1]%2)))sum++;
                    else break;
                }
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
