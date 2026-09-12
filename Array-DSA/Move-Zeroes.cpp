// Leetcode
// 283. Move Zeroes -> Easy

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        for(auto it : nums){
            if(it != 0)temp.push_back(it);
        }
        int m = temp.size();
        while(m < n){
            temp.push_back(0);
            m++;
        }
        nums = temp;
    }
};
