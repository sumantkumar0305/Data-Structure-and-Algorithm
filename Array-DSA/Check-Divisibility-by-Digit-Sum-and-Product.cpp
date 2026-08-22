// Leetcode
// 3622. Check Divisibility by Digit Sum and Product -> Easy

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, pr = 1;
        int temp = n;

        while(n > 0){
            int rem = n%10;
            sum += rem;
            pr *= rem;
            n /= 10;
        }

        sum += pr;

        return temp%sum == 0;
    }
};
