// Leetcode
// 771. Jewels and Stones -> Easy

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for(auto it : jewels){
            for(auto i : stones){
                if(it == i) ans++;
            }
        }

        return ans;
    }
};
