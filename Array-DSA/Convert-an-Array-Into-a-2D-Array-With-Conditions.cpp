// Leetcode
// 2610. Convert an Array Into a 2D Array With Conditions -> Med.

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>un;
        vector<vector<int>>ans;

        for(auto it : nums){
            if(ans.size() == un[it]){
                ans.push_back({});
            }
            ans[un[it]].push_back(it);
            un[it]++;
        }

        return ans;
    }
};
