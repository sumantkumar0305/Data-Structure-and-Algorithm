// Leetcode
// 119. Pascal's Triangle II -> Easy

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
    vector<int> getRow(int rowIndex) {

        vector<vector<int>>ans;

        ans.push_back({1});
        if(rowIndex == 0)return ans[0];
        ans.push_back({1,1});
        if(rowIndex == 1)return ans[1];

        for(int i = 2; i <= rowIndex; i++){
            ans.push_back(sum(ans[i-1], i));
        }

        return ans[rowIndex];
    }
};
