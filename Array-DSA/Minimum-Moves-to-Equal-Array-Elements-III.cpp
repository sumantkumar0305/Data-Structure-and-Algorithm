// Leetcode
// 3736. Minimum Moves to Equal Array Elements III -> Easy

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxVal = 0;
        for(auto it : nums){
            maxVal = max(maxVal, it);
        }

        int ans = 0;
        for(auto it : nums){
            ans += (maxVal-it);
        }

        return ans;
    }
};
