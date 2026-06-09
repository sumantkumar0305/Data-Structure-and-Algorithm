// Leetcode
// 3689. Maximum Total Subarray Value I -> Med.

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxVal = INT_MIN;
        int minVal = INT_MAX;

        for(auto it : nums){
            maxVal = max(maxVal, it);
            minVal = min(minVal, it);
        }

        long long ans = 1LL * (maxVal - minVal) * k;
        return ans;
    }
};
