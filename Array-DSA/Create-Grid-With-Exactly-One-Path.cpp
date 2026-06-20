// Leetcode (Contest)
// 1. Create Grid With Exactly One Path©leetcode -> Easy

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<string>> vec(m, vector<string>(n, "#"));

        for(int i = 0; i < m; i++){
            vec[i][0] = ".";
        }
    
        for(int i = 0; i < n; i++){
            vec[m-1][i] = ".";
        }
    
        vector<string>str;
    
        for(auto &it : vec){
            string ans = "";
            for(auto &cell : it){
                ans += cell;
            }
            str.push_back(ans);
        }
    
        return str;
    }
};©leetcode
