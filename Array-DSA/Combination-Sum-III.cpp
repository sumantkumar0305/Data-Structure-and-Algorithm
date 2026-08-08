// Leetcode
// 216. Combination Sum III -> Med.

class Solution {
    vector<vector<int>>ans;
    void helper(vector<int>&candiate, int target, int k, vector<int>&temp, int idx){
        if(target == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int i = idx; i < candiate.size(); i++){
            int it = candiate[i];
            if(it > target) break;
            target -= it;
            temp.push_back(it);
            helper(candiate, target, k, temp, i+1);
            temp.pop_back();
            target += it;
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>candidaite = {1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        helper(candidaite, n, k, temp, 0);
        return ans;
    }
};
