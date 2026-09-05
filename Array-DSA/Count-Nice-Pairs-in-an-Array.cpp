// Leetcode
// 1814. Count Nice Pairs in an Array -> Med.

class Solution {
    int rev(int n){
        int ans = 0;

        while(n > 0){
            int rem = n%10;
            ans = ans*10 + rem;
            n /= 10;
        }

        return ans;
    }

    int val = pow(10, 9)+7;
    int fact(int n){
        if(n < 2) return -1;
        if(n == 2) return 1;
        if(n == 3)return n;

        return ((n-1)+fact(n-1))%val;
    }
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int>un;
    
        for(auto it : nums){
            int n = it - rev(it);
            un[n]++;
        }

        int ans = 0;
        for(auto it : un){
            if(fact(it.second) == -1)continue;
            ans = (ans + fact(it.second))%val;
        }

        return ans;
    }
};
