// Leetcode
// 3105. Longest Strictly Increasing or Strictly Decreasing Subarray -> Easy

class Solution {
    int incr(vector<int>&num){
        int ans = 0;

        for(int i = 0; i < num.size(); i++){
            for(int j = i; j < num.size(); j++){
                int count = 1;
                for(int k = i; k < j; k++){
                    if(num[k] < num[k+1])count++;
                    else {
                        ans = max(ans, count);
                        count = 0;
                    }
                }
                ans = max(ans, count);
            }
        }

        return ans;
    } 

    int dncr(vector<int>&num){
        int ans = 0;

        for(int i = 0; i < num.size(); i++){
            for(int j = i; j < num.size(); j++){
                int count = 1;
                for(int k = i; k < j; k++){
                    if(num[k] > num[k+1])count++;
                    else {
                        ans = max(ans, count);
                        count = 0;
                    }
                }
                ans = max(ans, count);
            }
        }

        return ans;
    } 
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        return max(dncr(nums), incr(nums));
    }
};
