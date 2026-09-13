// Leetcode
// 96. Unique Binary Search Trees -> Med.

class Solution {
public:
    int numTrees(int n) {
        if(n == 0 || n == 0) return 1;
        // if(n == 19)

        long long temp = 1LL* numTrees(n-1) * (2 * (2*n - 1)) / (n + 1);
        return (int)temp;
    }
};
