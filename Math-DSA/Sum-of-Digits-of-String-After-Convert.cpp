// Leetcode
// 1945. Sum of Digits of String After Convert -> Easy

class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;

        for(auto it : s){
            int i = it-'a'+1;
            while(i > 0){
                sum += (i%10);
                i /= 10;
            }
        }

        if(k == 1) return sum;
        
        for(int i = 1; i < k; i++){
            int k = sum;
            sum = 0;
            while(k > 0){
                sum += (k%10);
                k /= 10;
            }
        }

        return sum;
    }
};
