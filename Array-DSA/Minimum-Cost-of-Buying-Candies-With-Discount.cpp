// Leetcode
// 2144. Minimum Cost of Buying Candies With Discount -> Easy

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int ans = 0;
        int temp = 0;
        for(int i = 0; i < cost.size(); i++){
            if(temp == 2){
                temp = 0;
                continue;
            }
            temp++;
            ans += cost[i];
        }   

        return ans;
    }
};
