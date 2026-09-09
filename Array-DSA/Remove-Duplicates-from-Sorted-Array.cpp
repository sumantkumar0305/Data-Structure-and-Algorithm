// Leetcode
// 26. Remove Duplicates from Sorted Array -> Easy

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>un(nums.begin(), nums.end());

        int i = 0;
        for(auto it : un){
            nums[i] = it;
            i++;
        }

        int j = nums.size();
        while(j > i){
            nums.pop_back();
            j--;
        }

        return i;
    }
};
