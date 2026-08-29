// Leetcode
// 2413. Smallest Even Multiple -> Easy

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0)return n;

        return n*2;
    }
};
