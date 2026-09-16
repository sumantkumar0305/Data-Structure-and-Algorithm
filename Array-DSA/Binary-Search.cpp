// Leetcode
// 704. Binary Search ->  Easy

class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = binary_search(nums.begin(), nums.end(), target);
        if(!it) return -1;
        auto val = lower_bound(nums.begin(), nums.end(), target);
        int idx = distance(nums.begin(), val);
        return idx;
    }
};
