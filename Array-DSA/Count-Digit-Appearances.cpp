// Leetcode
// 3895. Count Digit Appearances -> Med.

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        
        for(auto it : nums){
            int n = it;
            while(n > 0){
                if(n%10 == digit)ans++;
                n /= 10;
            }
        }

        return ans;
    }
};
