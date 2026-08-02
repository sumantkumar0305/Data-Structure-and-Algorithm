// Leetcode
// 1051. Height Checker -> Med.

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp;
        sort(heights.begin(), heights.end());

        int ans = 0;
        for(int i = 0; i < temp.size(); i++){
            if(heights[i] != temp[i]) ans++;
        }

        return ans;
    }
};
