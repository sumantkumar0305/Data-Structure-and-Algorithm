// Leetcode
// 485. Max Consecutive Ones -> Easy

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        bool isOne = false;

        for(auto it : nums){
            if(it == 1){
                sum++;
            }else{
                ans = max(ans, sum);
                sum = 0;
            }
        }
        ans = max(ans, sum);

        return ans;
    }
};
