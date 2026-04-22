// LeetCode
// 2924. Find Champion II -> Med

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>indeg(n, 0);

        for(auto it : edges){
            indeg[it[1]]++;
        }

        int count = 0;
        int ans;
        for(int i = 0; i < n; i++){
            int it = indeg[i];
            if(it == 0){
                count ++;
                ans = i;
            }
        }

        if(count > 1) return -1;
        return ans;
    }
};
