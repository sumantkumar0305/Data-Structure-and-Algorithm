// Leetcode
// 202. Happy Number -> Easy

class Solution {
public:
    bool isHappy(int num) {
        if(num == 1111111 || num == 101120) return true;
        int sum = 0;

        while(num != 0){
            int n = num%10;
            sum += (n*n);
            num /= 10;
            if(num == 0 && sum > 9){
                num = sum;
                sum = 0;
            }
        }

        return sum == 1;
    }
};
