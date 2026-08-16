// Leetcode
// 1828. Queries on Number of Points Inside a Circle -> Med.

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;

        for(auto it : queries){
            int count = 0;
            for(auto i : points){
                double r = sqrt(
                   1.0 * (it[0] - i[0]) * (it[0] - i[0]) +
                   1.0 * (it[1] - i[1]) * (it[1] - i[1])
                );
                if(r <= it[2]) count++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};
