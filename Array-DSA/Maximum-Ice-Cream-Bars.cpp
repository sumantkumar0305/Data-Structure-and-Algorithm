// Leetcode
// 1833. Maximum Ice Cream Bars -> Med.

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        for(auto it : costs){
            coins -= it;
            if(coins < 0){
                break;
            }

            ans++;
        }

        return ans;
    }
};
