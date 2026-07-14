// Leetcode
// 992. Subarrays with K Different Integers -> Hard

class Solution {
    int atMost(vector<int>&nums, int k){
        unordered_map<int, int>un;
        int ans = 0, l = 0;
        for(int r = 0; r < nums.size(); r++){
            un[nums[r]]++;
            while(un.size() > k){
                un[nums[l]]--;
                if(un[nums[l]] == 0) un.erase(nums[l]);
                l++;
            }
            ans += (r-l+1);
        }

        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};
