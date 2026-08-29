// Leetcode
// 2221. Find Triangular Sum of an Array -> Med.

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();

        for(int i = 1; i < n; i++){
            vector<int>temp;
            for(int j = 1; j < nums.size(); j++){
                int a = nums[j]+nums[j-1];
                a %= 10;
                temp.push_back(a);
            }
            nums = temp;
        }

        return nums[0];
    }
};
