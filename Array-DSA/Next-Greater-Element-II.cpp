// Leetcode
// 503. Next Greater Element II -> Med.

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n, -1);

        for(int i = 0; i < n; i++){
            int j = i+1, count = 0;
            while(count < n){
                if(j == n)j=0;
                if(nums[i] < nums[j]){
                    ans[i] = nums[j];
                    break;
                }
                j++;
                count++;
            }
        }

        return ans;
    }
};
