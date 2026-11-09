// Leetcode
// 2544. Alternating Digit Sum -> Easy

class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>vec;

        while(n > 0){
            int rem = n%10;
            vec.push_back(rem);
            n /= 10;
        }

        reverse(vec.begin(), vec.end());

        int sum = 0;
        for(int i = 0; i < vec.size(); i++){
            if(i%2 == 0){
                sum += vec[i];
            }else{
                sum -= vec[i];
            }
        }

        return sum;
    }
};
