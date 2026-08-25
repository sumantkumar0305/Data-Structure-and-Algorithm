// Leetcode
// 3718. Smallest Missing Multiple of K -> Easy

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>un;
        int temp = k;
        
        for(auto it : nums){
            un.insert(it);
        }

        while(un.count(k) != 0){
            k += temp;
        }

        return k;
    }
};
