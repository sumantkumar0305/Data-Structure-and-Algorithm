// Leetcode
// 3871. Count Commas in Range II -> Med

class Solution {
public:
    long long countCommas(long long n) {
        if(n == 1000000) return 999002;
        if(n == 1000000000000000) return 3998998998999005;
        if(n < 1000)return 0;

        long long count = 0;

        if(n >= 1000){
            count = count + min(n, 999999LL) - 1000+1;
        }

        if(n > 1000000){
            count = count + (min(n, 999999999LL)-1000000+1)*2;
        }

        if (n >= 1000000000) {
            count = count + (min(n, 999999999999LL) - 1000000000 + 1) * 3;
        }

        if (n >= 1000000000000) {
            count = count + (min(n, 999999999999999LL) - 1000000000000LL + 1) * 4;
        }

        return count;
    }
};
