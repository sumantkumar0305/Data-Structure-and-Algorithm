// Leetcode
// 39. Combination Sum -> Med.

class Solution {
    vector<vector<int>>ans;
    void helper(vector<int>&candiate, int target, vector<int>&temp, int k){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int i = k; i < candiate.size(); i++){
            int it = candiate[i];
            if(target >= it){
                target -= it;
                temp.push_back(it);
                helper(candiate, target, temp, i);
                temp.pop_back();
                target += it;
            }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(candidates, target, temp, 0);

        return ans;
    }
};
