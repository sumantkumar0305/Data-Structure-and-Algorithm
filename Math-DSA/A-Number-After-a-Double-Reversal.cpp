// Leetcode
// 2119. A Number After a Double Reversal -> Easy

class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp = num;
        int firstReverse = 0;

        while(temp > 0){
            int rem = temp%10;
            temp /= 10;
            firstReverse = firstReverse*10+rem;
        } 

        int secondReverse = 0;
        while(firstReverse > 0){
            int rem = firstReverse%10;
            firstReverse /= 10;
            secondReverse = secondReverse*10+rem;
        }

        return num == secondReverse;
    }
};
