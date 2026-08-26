// Leetcode
// 3532. Path Existence Queries in a Graph I -> Med.

class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int>conn(n, 0);

        for(int i = 1; i < n; i++){
            conn[i] = conn[i-1] + (nums[i]-nums[i-1] > maxDiff);
        }

        vector<bool>ans;
        for(auto it : queries){
            if(conn[it[0]] == conn[it[1]])ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
