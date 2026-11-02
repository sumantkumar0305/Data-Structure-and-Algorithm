// Leetcode
// 8. String to Integer (atoi) -> Med.

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool isNeg = false;
        while(s[i] == ' '){
            i++;
        }       
        if(s[i] == '-'){
            isNeg = true;
            i++;
        }else if(s[i] == '+'){
            isNeg = false;
            i++;
        }

        int j = i;
        int sum = 0;
        while(isdigit(s[i])){
            i++;
            sum++;
        }

        if(!isNeg){
            long long ans = 0;
            for(int k = j; k < i; k++){
                ans = ans*10+(s[k]-'0');
                if(ans > 2147483647){
                    ans = 2147483647;
                    break;
                }
            }
            return ans;
        }else{
            long long ans = 0;
            for(int k = j; k < i; k++){
                ans = ans*10+(s[k]-'0');
                if(ans > 2147483648){
                    ans = 2147483648;
                    break;
                }
            }
            ans = 0-ans;
            return ans;
        }

        return 1;
    }
};
