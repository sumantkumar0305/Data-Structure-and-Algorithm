// Leetcode
// 3668. Restore Finishing Order -> Easy

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>un;
        for(auto it : friends){
            un.insert(it);
        }
        vector<int>ans;
        for(auto it : order){
            if(un.count(it) != 0)ans.push_back(it);
        }

        return ans;
    }
};
