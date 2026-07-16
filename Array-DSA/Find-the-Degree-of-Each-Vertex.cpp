// Leetcode
// 3898. Find the Degree of Each Vertex -> Easy

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans(matrix.size());
        for(int i = 0; i < matrix.size(); i++){
            int count = 0;
            for(auto it : matrix[i]){
                if(it == 1) count++;
            }
            ans[i] = count;
        }

        return ans;
    }
};
