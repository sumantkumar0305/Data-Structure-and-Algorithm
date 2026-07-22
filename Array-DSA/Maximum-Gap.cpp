// Leetcode
// 164. Maximum Gap -> Med.

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() == 1)return 0;

        sort(nums.begin(), nums.end());
        int gap = INT_MIN;
        for(int i = 0; i < nums.size()-1; i++){
            gap = max(gap, abs(nums[i]-nums[i+1]));
        }

        return gap;
    }
};
