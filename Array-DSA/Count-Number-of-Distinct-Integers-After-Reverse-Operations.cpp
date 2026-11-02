// Leetcode
// 2442. Count Number of Distinct Integers After Reverse Operations -> Med.

class Solution {
    int reverse(int n){
        int ans = 0;

        while(n > 0){
            int rem = n%10;
            ans = ans*10+rem;
            n /= 10;
        }

        return ans;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int n = reverse(nums[i]);
            nums.push_back(n);
        }

        unordered_set<int>ans(nums.begin(), nums.end());

        return ans.size();
    }
};
