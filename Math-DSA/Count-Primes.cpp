// Leetcode
// 204. Count Primes -> med.

class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) return 0;

        vector<bool>isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                for (long long j = 1LL * i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(isPrime[i]) ans++;
        }

        return ans;
    }
};
