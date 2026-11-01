// Leetcode
// 462. Minimum Moves to Equal Array Elements II -> Med.

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int val = (n)/2;
        val = nums[val];

        int ans = 0;
        for(auto it : nums){
            ans = ans + abs(it-val);
        }

        return ans;
    }
};
