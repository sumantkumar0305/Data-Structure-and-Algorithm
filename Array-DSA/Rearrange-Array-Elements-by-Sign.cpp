// Leetcode
// 2149. Rearrange Array Elements by Sign -> Med.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg, pos;

        for(auto it : nums){
            if(it < 0){
                neg.push_back(it);
            }else{
                pos.push_back(it);
            }
        }

        int j = 0;
        for(int i = 0; i < pos.size(); i++){
            nums[j++] = pos[i];
            nums[j++] = neg[i];
        }

        return nums;
    }
};
