// Leetcode
// 3065. Minimum Operations to Exceed Threshold Value I -> Easy

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(auto it : nums){
            if(it < k) ans++;
        }

        return ans;
    }
};
