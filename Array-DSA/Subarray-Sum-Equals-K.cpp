// Leetcode
// 560. Subarray Sum Equals K -> Med.

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>un;
        int sum = 0, ans = 0;
        un[0] = 1;

        for(auto it : nums){
            sum += it;

            if(un.count(sum-k)){
                ans += un[sum-k];
            }
            un[sum]++;
        }

        return ans;
    }
};
