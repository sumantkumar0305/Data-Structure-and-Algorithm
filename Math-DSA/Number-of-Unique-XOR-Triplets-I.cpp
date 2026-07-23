// Leetcode
// 3513. Number of Unique XOR Triplets I -> Med.

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 || n == 2) return n;
        
        return 1 << (32 - __builtin_clz(n));
    }
};
