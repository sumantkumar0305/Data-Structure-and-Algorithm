// Leetcode
// 152. Maximum Product Subarray -> Med.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPr = nums[0];
        int minPr = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int it = nums[i];
            if(it < 0){
                swap(maxPr, minPr);
            }

            maxPr = max(it, maxPr*it);
            minPr = min(it, minPr*it);

            ans = max(ans, maxPr);
        }

        return ans;
    }
};
