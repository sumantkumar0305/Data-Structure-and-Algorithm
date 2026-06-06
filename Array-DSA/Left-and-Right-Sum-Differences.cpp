// Leetcode
// 2574. Left and Right Sum Differences -> Easy

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>right(n, 0);
        vector<int>left(n, 0);
        vector<int>ans;
        
        for(int i = 0; i < n-1; i++){
            right[i+1] = right[i]+nums[i];
        }

        for(int i = n-1; i > 0; i--){
            left[i-1] = left[i]+nums[i];
        }

        for(int i = 0; i < n; i++){
            ans.push_back(abs(right[i]-left[i]));
        }

        return ans;
    }
};
