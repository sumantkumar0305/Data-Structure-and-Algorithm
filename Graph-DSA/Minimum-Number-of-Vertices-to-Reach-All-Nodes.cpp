// LeetCode
// 1557. Minimum Number of Vertices to Reach All Nodes -> Med

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>indeg(n, 0);

        for(auto it : edges){
            int u = it[0], v = it[1];
            indeg[v]++;
        }

        vector<int>ans;
        for(int i = 0; i < n; i++){
            if(indeg[i] == 0) ans.push_back(i);
        }

        return ans;
    }
};
