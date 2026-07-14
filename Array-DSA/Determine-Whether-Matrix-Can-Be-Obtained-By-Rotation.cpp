// Leetcode
// 1886. Determine Whether Matrix Can Be Obtained By Rotation -> Easy

class Solution {
    int count_one(vector<vector<int>>&mat){
        int ans = 0;
        
        for(auto it : mat){
            for(auto i : it){
                if(i == 1) ans++;
            }
        }

        return ans;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i+1; j < matrix[0].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(count_one(mat) != count_one(target)) return false;

        for(int i = 0; i < 4; i++){
            rotate(mat);
            if(mat == target) return true;
        }

        return false;
    }
};
