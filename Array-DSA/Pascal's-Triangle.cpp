// Leetcode
// 118. Pascal's Triangle -> Easy

class Solution {
    vector<int>sum(vector<int>&num, int n){
        vector<int>temp(n+1);
        temp[0] = 1;

        for(int i = 1; i < n; i++){
            temp[i] = num[i-1]+num[i];
        }
        temp[n] = 1;

        return temp;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        ans.push_back({1});
        if(numRows == 1)return ans;
        ans.push_back({1,1});
        if(numRows == 2)return ans;

        for(int i = 2; i < numRows; i++){
            ans.push_back(sum(ans[i-1], i));
        }

        return ans;
    }
};
