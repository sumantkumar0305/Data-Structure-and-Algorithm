// Leetcode
// 3731. Find Missing Elements -> Easy

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>un;
        int minVal = 200, maxVal = 0;

        for(auto it : nums){
            un.insert(it);
            minVal = min(minVal, it);
            maxVal = max(maxVal, it);
        }

        vector<int>ans;
        for(int i = minVal; i <= maxVal; i++){
            if(un.count(i) == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};
