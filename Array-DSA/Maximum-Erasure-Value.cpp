// Leetcode
// 1695. Maximum Erasure Value -> Med.

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        int l = 0;
        unordered_set<int>un;
        for(int r = 0; r < nums.size(); r++){
            if(un.count(nums[r]) != 0){
                ans = max(ans, sum);
                while(un.count(nums[r]) != 0){
                    un.erase(nums[l]);
                    sum -= nums[l];
                    l++;
                }
            }
            sum += nums[r];
            un.insert(nums[r]);
        } 

        ans = max(ans, sum);
        return ans;
    }
};
