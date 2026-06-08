// Leetcode
// 66. Plus One -> Easy

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());

        int c = 0;
        int sum = digits[0]+1;
        digits[0] = (sum%10);
        c = sum/10;
        for(int i = 1; i < digits.size(); i++){
            sum = c+digits[i];
            c = sum/10;
            digits[i] = (sum%10);

            if(c == 0) break;
        }

        if(c != 0) digits.push_back(c);

        reverse(digits.begin(), digits.end());

        return digits;
    }
};
