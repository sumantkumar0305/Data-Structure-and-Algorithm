// Leetcode
// 219. Contains Duplicate II -> Easy

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_set<int>un;

        for(int i = 0; i < nums.size(); i++){
            if(un.count(nums[i]) != 0) return true;

            un.insert(nums[i]);

            if(un.size() > k){
                un.erase(nums[i-k]);
            }
        }

        return false;
    }
};
