// Leetcode
// 2177. Find Three Consecutive Integers That Sum to a Given Number -> Med.

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long temp = num-3;
        long long ans = temp/3;
        if(ans*3 != temp) return {};

        return {ans, ans+1, ans+2};
    }
};
