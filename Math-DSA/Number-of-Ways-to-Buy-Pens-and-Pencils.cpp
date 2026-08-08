// Leetcode
// 2240. Number of Ways to Buy Pens and Pencils -> Med.

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        while(total >= 0){
            int temp = total/cost2;
            ans = ans+temp+1;
            total -= cost1;
        }

        return ans;
    }
};
