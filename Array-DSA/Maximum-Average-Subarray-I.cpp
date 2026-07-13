// Leetcode
// 643. Maximum Average Subarray I -> Easy

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0.0;
        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            if(r-l+1 == k){
                ans = max(ans, sum/k);
                sum -= nums[l];
                l++;
            }
        }

        return ans;
    }
};
