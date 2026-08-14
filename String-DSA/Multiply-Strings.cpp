// Leetcode
// 43. Multiply Strings -> Med.

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 =="0") return "0";
        int a = num1.length();
        int b = num2.length();

        vector<int>vec(a+b, 0);

        for(int i = a-1; i >=0; i--){
            int one = num1[i]-'0';
            for(int j = b-1; j >= 0; j--){
                int two = num2[j]-'0';

                int sum = vec[i+j+1]+one*two;
                vec[i+j+1] = sum%10;;
                vec[i+j] += sum/10;
            }
        }

        string result = "";
        bool skip_leading_zero = true;
        for (int digit : vec) {
            if (digit != 0) {
                skip_leading_zero = false;
            }
            if (!skip_leading_zero) {
                result += to_string(digit);
            }
        }

        return result;
    }
};
