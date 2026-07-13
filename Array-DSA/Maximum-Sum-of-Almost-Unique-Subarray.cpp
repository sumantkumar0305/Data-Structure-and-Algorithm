// Leetcode
// 2841. Maximum Sum of Almost Unique Subarray -> Med.

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans = 0;
        long long sum = 0;
        unordered_map<int, int>un;

        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            un[nums[r]]++;

            if((r-l+1) == k){
                if(un.size() >= m){
                    ans = max(ans, sum);
                }
                sum -= nums[l];
                un[nums[l]]--;

                if(un[nums[l]] == 0) un.erase(nums[l]);
                l++;
            }
        }

        return ans;
    }
};
