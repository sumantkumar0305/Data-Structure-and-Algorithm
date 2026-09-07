// Leetcode
// 532. K-diff Pairs in an Array -> Med.

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int, int>>un;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                int a = abs(nums[i]-nums[j]);
                if(a == k){
                    if(nums[i] < nums[j]){
                        un.insert({nums[i], nums[j]});
                    }else{
                        un.insert({nums[j], nums[i]});
                    }
                }
            }
        }

        return un.size();
    }
};
