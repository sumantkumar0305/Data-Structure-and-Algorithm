// Leetcode
// 34. Find First and Last Position of Element in Sorted Array -> Med.

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        ans[0] = findBound(nums, target, true);   
        ans[1] = findBound(nums, target, false);  
        return ans;
    }
    
private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int st = 0, end = nums.size() - 1, result = -1;
        while(st <= end) {
            int mid = st + (end - st) / 2;
            if(nums[mid] == target) {
                result = mid;
                if(isFirst) {
                    end = mid - 1;  
                } else {
                    st = mid + 1;   
                }
            } else if(nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return result;
    }
};
