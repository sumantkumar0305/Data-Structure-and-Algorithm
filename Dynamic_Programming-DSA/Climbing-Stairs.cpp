//LeetCode
// 70. Climbing Stairs -> Easy

class Solution {
    int fina(int n, vector<int>&num){
        if(n == 0 || n == 1)return n;
        if(n == 2) return 2;

        if(num[n] != -1){
            return num[n];
        }

        num[n] = fina(n-1, num)+ fina(n-2, num);
        return num[n];
    }
public:
    int climbStairs(int n) {
        vector<int>num(n+1, -1);

        return fina(n, num);
    }
};