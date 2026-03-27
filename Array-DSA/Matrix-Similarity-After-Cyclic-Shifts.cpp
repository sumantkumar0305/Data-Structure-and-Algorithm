// LeetCode
// 2946. Matrix Similarity After Cyclic Shifts -> Easy

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>>temp = mat;

        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j += 2){
                for(int k = 0; k < m-1; k++){
                    swap(temp[j][k], temp[j][k+1]);
                }
            }

            for(int j = 1; j < n; j += 2){
                for(int k = m-1; k > 0; k--){
                    swap(temp[j][k], temp[j][k-1]);
                }
            }
        }

        if(temp == mat) return true;
        return false;
    }
};
