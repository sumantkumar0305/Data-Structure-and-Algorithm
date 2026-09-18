// Leetcode
// 231. Power of Two -> Easy

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)return false; 
    
        string ans = "";

        while(n>0){
            int rem = n%2;
            ans += to_string(rem);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        for(int i = 1; i < ans.length(); i++){
            if(ans[i] != '0')return false;
        }

        return true;
    }
};
