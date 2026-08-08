// Leetcode
// 128. Longest Consecutive Sequence -> Med.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());

        int ans = -1, temp = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1]+1 == nums[i]){
                temp++;
            }else if(nums[i-1] == nums[i])continue;
            else{
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(ans, temp);

        return ans;
    }
};
