// Leetcode
// 2427. Number of Common Factors -> Leetcode

class Solution {
    void factor(unordered_set<int>&un, int t){
        for(int i = 1; i <= t; i++){
            if(t%i == 0) un.insert(i);
        }
    }
public:
    int commonFactors(int a, int b) {
        unordered_set<int>fir;
        unordered_set<int>sec;

        factor(fir, a);
        factor(sec, b);
        int ans = 0;

        for(auto it : sec){
            if(fir.count(it)) ans++;
        }

        return ans;
    }
};
