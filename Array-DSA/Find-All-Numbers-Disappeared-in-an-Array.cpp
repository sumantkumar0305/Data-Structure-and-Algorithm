// Leetcode
// 448. Find All Numbers Disappeared in an Array -> Easy

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>un;

        int maxVal = nums.size();
        for(auto it : nums){
            un.insert(it);
            maxVal = max(maxVal, it);
        }

        vector<int>ans;
        int temp = 1;
        while(temp <= maxVal){
            if(un.count(temp) == 0) ans.push_back(temp);
            temp++;
        }

        return ans;
    }
};
