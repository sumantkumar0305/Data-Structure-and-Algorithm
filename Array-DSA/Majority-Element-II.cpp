// Leetcode
// 229. Majority Element II -> Med.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        int n = nums.size()/3;

        for(auto it : un){
            if(it.second > n) return it.first;
        }

        return 0;
    }
};
