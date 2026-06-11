// Leetcode
// 287. Find the Duplicate Number -> Med

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> un;

        for(auto it : nums){
            un[it]++;
        }

        for(auto it : un){
            if(it.second >= 2) return it.first;
        }

        return -1;
    }
};
