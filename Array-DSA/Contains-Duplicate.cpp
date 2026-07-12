// Leetcode
// 217. Contains Duplicate -> Easy

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>un;

        for(auto it : nums){
            if(un.count(it) != 0) return true;
            un.insert(it);
        }

        return false;
    }
};
