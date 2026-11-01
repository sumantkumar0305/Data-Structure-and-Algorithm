// Leetcode
// 453. Minimum Moves to Equal Array Elements -> Med.

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = INT_MAX;

        for(auto it : nums){
            minVal = min(minVal, it);
        }

        int ans = 0;
        for(auto it : nums){
            ans = ans + (it-minVal);
        }

        return ans;
    }
};
