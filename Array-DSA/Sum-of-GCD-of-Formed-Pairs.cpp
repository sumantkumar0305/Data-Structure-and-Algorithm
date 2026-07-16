// Leetcode
// 3867. Sum of GCD of Formed Pairs -> Med.

class Solution {
    int gcd(int a, int b){
        if(b == 0) return a;

        return gcd(b, a%b);
    }

public:
    long long gcdSum(vector<int>& nums) {
        vector<int>pairGrid(nums.size());
        int maxVal = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            maxVal = max(maxVal, nums[i]);
            pairGrid[i] = gcd(maxVal, nums[i]);
        }

        sort(pairGrid.begin(), pairGrid.end());
        long long ans = 0;
        int st = 0, end = nums.size()-1;
        while(st < end){
            ans += gcd(pairGrid[st], pairGrid[end]);
            st++;
            end--;
        }

        return ans;
    }
};
