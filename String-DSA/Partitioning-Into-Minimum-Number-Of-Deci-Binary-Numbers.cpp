// Leetcode
// 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers -> Med.

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(auto it : n){
            int i = it-'0';
            ans = max(ans, i);
        }

        return ans;
    }
};
