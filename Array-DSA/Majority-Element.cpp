// Leetcode
// 169. Majority Element -> Easy

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        int n = nums.size()/2;

        for(auto it : un){
            if(it.second > n) return it.first;
        }

        return 0;
    }
};
