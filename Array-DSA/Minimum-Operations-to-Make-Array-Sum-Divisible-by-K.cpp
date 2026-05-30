// Leetcode
// 3512. Minimum Operations to Make Array Sum Divisible by K -> Easy

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;

        for(auto it : nums){
            sum += it;
        }

        return sum%k;
    }
};
