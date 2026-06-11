// Leetcode
// 137. Single Number II -> Med

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        for(auto it : un){
            if(it.second == 1) return it.first;
        }

        return 0;
    }
};
