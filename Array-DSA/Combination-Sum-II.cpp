// Leetcode
// 40. Combination Sum II -> Med.

class Solution {
    vector<vector<int>>ans;
    void helper(vector<int>&candiate, int target, vector<int>&temp, int k){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int i = k; i < candiate.size(); i++){
            if(i > k && candiate[i] == candiate[i-1]) continue;
            int it = candiate[i];
            if(it > target) break;

            target -= it;
            temp.push_back(it);
            helper(candiate, target, temp, i+1);
            temp.pop_back();
            target += it;
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, temp, 0);

        return ans;
    }
};
