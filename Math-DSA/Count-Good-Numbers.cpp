// Leetcode
// 1922. Count Good Numbers -> Med.

class Solution {
    const long long MOD = 1e9 + 7;
    long long power(long long base, long long exp){
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }
public:
    int countGoodNumbers(long long n) {
        const long long MOD = 1e9 + 7;

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long left = power(5, even);
        long long rig = power(4, odd);

        return (left*rig)%MOD;
    }
};
