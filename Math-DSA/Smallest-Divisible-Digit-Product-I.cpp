// Leetcode
// 3345. Smallest Divisible Digit Product I -> Easy

class Solution {
    int product(int n){
        int ans = 1;
        while(n > 0){
            ans = ans*(n%10);
            n /= 10;
        }

        return ans;
    }
public:
    int smallestNumber(int n, int t) {
        int pr = product(n);

        while(pr%t != 0){
            n++;
            pr = product(n);
        }

        return n;
    }
};
