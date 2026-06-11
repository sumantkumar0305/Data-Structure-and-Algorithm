// Leetcode
// 268. Missing Number -> Easy

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>un;

        for(auto it : nums){
            un.insert(it);
        }

        int ans = 0;
        while(un.count(ans) != 0){
            ans++;
        }

        return ans;
    }
};
