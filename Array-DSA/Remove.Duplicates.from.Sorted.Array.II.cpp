// Leetcode
// 80. Remove Duplicates from Sorted Array II -> Med.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        int i = 0;
        for(auto it : un){
            // cout<<it.first<<" "<<it.second<<endl;
            int minVal = min(2, it.second);
            for(int j = 0; j < minVal; j++){
                nums[i] = it.first;
                i++;
            }
        }

        int j = nums.size();
        while(j > i){
            nums.pop_back();
            j--;
        }

        return i;
    }
};
