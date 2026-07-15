// Leetcode
// 3658. GCD of Odd and Even Sums -> Easy

class Solution {
    int gcd(int a, int b){
        if(b == 0) return a;

        return gcd(b, a%b);
    }
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = n*(n+1);

        return gcd(sumOdd, sumEven);
    }
};
