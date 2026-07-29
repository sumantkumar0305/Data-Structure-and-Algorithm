// Leetcode
// 365. Water and Jug Problem -> Med.

class Solution {
    bool dfs(int x, int y, int total, int jug, vector<int>&vis, int target){
        if(jug > total || jug < 0 || vis[jug] == 1) return false;
        vis[jug] = 1;
        if(jug == target) return true;

        bool a = dfs(x, y, total, jug+x, vis, target);
        bool b = dfs(x, y, total, jug-x, vis, target);
        bool c = dfs(x, y, total, jug+y, vis, target);
        bool d = dfs(x, y, total, jug-y, vis, target);

        return a||b||c||d;
    }
public:
    bool canMeasureWater(int x, int y, int target) {
        int total = x+y;
        vector<int>vec(total+1, 0);

        return dfs(x, y, total, 0, vec, target);
    }
};
