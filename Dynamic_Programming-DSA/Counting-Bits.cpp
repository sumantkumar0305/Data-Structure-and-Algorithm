// Leetcode
// 338. Counting Bits -> Easy

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);

        for(int i = 0; i <= n; i++){
            int count = 0;
            int j = i;
            while(j > 0){
                int rem = j%2;
                if(rem == 1)count++;
                j /= 2;
            }
            ans[i] = count;
        }

        return ans;
    }
};
