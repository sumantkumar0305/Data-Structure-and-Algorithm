// Leetcode
// 2364. Count Number of Bad Pairs -> Med.

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long, long long> freq;

        long long goodPairs = 0;
        long long n = nums.size();

        for (long long i = 0; i < n; i++) {
            long long value = nums[i] - i;
            goodPairs += freq[value];
            freq[value]++;
        }

        long long totalPairs = n * (n - 1) / 2;

        return totalPairs - goodPairs;
    }
};
