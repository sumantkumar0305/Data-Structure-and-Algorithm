// Leetcode
// 2033. Minimum Operations to Make a Uni-Value Grid -> Med.

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>vec;

        for(auto it : grid){
            for(auto i : it){
                vec.push_back(i);
            }
        }

        sort(vec.begin(), vec.end());
        int n = vec.size();
        int val = n/2;
        val = vec[val];

        int ans = 0;
        for(auto it : vec){
            int sub = abs(it-val);
            if(sub%x != 0)return -1;
            sub /= x;
            ans += sub;
        }

        return ans;
    }
};
