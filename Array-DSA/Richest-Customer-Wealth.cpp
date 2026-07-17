// Leetcode
// 1672. Richest Customer Wealth -> Easy

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;

        for(auto it : accounts){
            int sum = 0;
            for(auto i : it){
                sum += i;
            }
            ans = max(ans, sum);
        }

        return ans;
    }
};
