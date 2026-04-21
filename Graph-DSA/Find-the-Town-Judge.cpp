// LeetCode
// 997. Find the Town Judge -> Easy

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indeg(n, 0);
        vector<int>out(n, 0);

        for(auto it : trust){
            int u = it[0]-1, v = it[1]-1;
            indeg[v]++;
            out[u]++;
        }

        for(int i = 0; i < n; i++){
            if(out[i] == 0){
                if(indeg[i] == n-1) return i+1;
            }
        }

        return -1;
    }
};
