// Leetcode
// 16. 3Sum Closest -> Med.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans, diff = INT_MAX;
        
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (abs(target - sum) < diff) {
                    diff = abs(target - sum);
                    ans = sum;
                }else if (sum < target) {
                    left++;
                }else if (sum > target) {
                    right--;
                }
                else {
                    return sum;
                }
            }
        }
        
        return ans;
    }
};
