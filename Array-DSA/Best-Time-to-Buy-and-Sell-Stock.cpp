// Leetcode
// 121. Best Time to Buy and Sell Stock -> Easy

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)return 0;

        int ans = INT_MIN, minVal = prices[0];

        for(int i = 1; i < prices.size(); i++){
            int profit = prices[i]-minVal;
            ans = max(ans, profit);
            minVal = min(minVal, prices[i]);
        }
        if(ans < 0)return 0;

        return ans;
    }
};
