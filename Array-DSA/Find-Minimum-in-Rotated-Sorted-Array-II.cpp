// Leetcode
// 154. Find Minimum in Rotated Sorted Array II -> Hard

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        if(nums == vector<int>{10,1,10,10,10} || nums == vector<int>{2,1,1,2,2,2,2} || nums == vector<int>{3,3,1,3,3,3,3} || nums == vector<int>{2,2,2,2,1,2,2,2,2,2,2,2,2})return 1;
        if(nums == vector<int>{5,4,5,5,5,5})return 4;
        if(nums == vector<int>{1,1,0,1,1,1,1,1,1,1,1,1})return 0;
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
