// Leetcode
// 1658. Minimum Operations to Reduce X to Zero -> Med.

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
    
        int total = 0;
        for(auto it : nums){
            total += it;
        }

        int taget = total-x;
        if(taget == 0)return n;

        int sum = 0;
        int maxLen = -1;
        int left = 0;
        for(int right = 0; right < n; right++){
            sum += nums[right];

            while(left <= right && sum > taget){
                sum -= nums[left];
                left++;   
            }

            if(sum == taget){
                maxLen = max(maxLen, right-left+1);
            }
        }

        if(maxLen == -1)return -1;

        return n-maxLen;
    }
};
