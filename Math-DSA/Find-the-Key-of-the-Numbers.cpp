// Leetcode
// 3270. Find the Key of the Numbers -> Easy

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int>first(4, 0), second(4, 0), third(4, 0);

        int j = 3;
        while(num1 > 0){
            int rem = num1%10;
            first[j--] = rem;
            num1 /= 10;
        }

        j=3;
        while(num2 > 0){
            int rem = num2%10;
            second[j--] = rem;
            num2 /= 10;
        }

        j=3;
        while(num3 > 0){
            int rem = num3%10;
            third[j--] = rem;
            num3 /= 10;
        }

        int ans = 0;
        for(int i = 0; i < 4; i++){
            ans *= 10;
            ans += min(third[i], min(first[i], second[i]));
        }

        return ans;
    }
};
