// Leetcode
// 153. Find Minimum in Rotated Sorted Array -> Med.

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        int st = 0, end = nums.size()-1;
        int ans = INT_MAX;

        while(st < end){
            int mid = st + (end-st)/2;

            ans = min(ans, nums[mid]);
            ans = min(ans, nums[st]);
            ans = min(ans, nums[end]);
            if(nums[mid] >= nums[st]){
                st = mid+1;
            }
            else if(nums[mid] <= nums[end]){
                end = mid-1;
            }
        }

        return ans;
    }
};
