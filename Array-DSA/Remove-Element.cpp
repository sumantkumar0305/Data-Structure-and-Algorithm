// Leetcode
// 27. Remove Element -> Easy

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>num;

        for(auto it : nums){
            if(it != val){
                num.push_back(it);
            }
        }

        int i = 0;
        for(auto it : num){
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
