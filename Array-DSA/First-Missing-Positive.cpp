// Leetcode
// 41. First Missing Positive -> Hard

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>un;

        for(auto it : nums){
            un.insert(it);
        }

        int ans = 1;
        while(un.count(ans) != 0){
            ans++;
        }

        return ans;
    }
};
