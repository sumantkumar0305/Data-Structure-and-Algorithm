// Leetcode
// 2090. K Radius Subarray Averages -> Med.

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size(), -1);
        int l = 0;
        long long sum = 0;
        for(int i = 0; i < k && i < nums.size(); i++){
            sum += nums[i];
        }
        
        int idx = k;
        for(int i = k; i < nums.size(); i++){
            sum += nums[i];
            if(i-idx == k){
                int avg = sum/(2*k+1);
                ans[idx] = avg;
                idx++;
                sum -= nums[l];
                l++;
            }
        }

        return ans;
    }
};
