// Leetcode
// 2243. Calculate Digit Sum of a String -> Easy

class Solution {
public:
    string digitSum(string s, int k) {
        string str = s;

        while(str.length() > k){
            int i = 0, sum = 0;
            string temp = "";
            for(auto it : str){
                sum += (it-'0');
                i++;
                if(i == k){
                    temp += to_string(sum);
                    sum = 0;
                    i = 0;
                }
            }
            if(i > 0)
            temp += to_string(sum);
            str = temp;
        }

        return str;
    }
};
