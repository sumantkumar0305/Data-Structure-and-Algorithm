// Leetcode
// 1561. Maximum Number of Coins You Can Get -> Med.

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());

        int l = 1, r = piles.size()-1;
        int ans = 0;

        while(l < r){
            ans += piles[l];
            l += 2;
            r--;
        }

        return ans;
    }
};
