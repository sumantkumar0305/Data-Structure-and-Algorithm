// Leetcode
// 260. Single Number III -> Med

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        vector<int>ans;
        for(auto it : un){
            if(it.second == 1) ans.push_back(it.first);
        }

        return ans;
    }
};
