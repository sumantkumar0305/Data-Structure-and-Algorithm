// Leetcode
// 2165. Smallest Value of the Rearranged Number -> Med.

class Solution {
public:
    long long smallestNumber(long long num) {
        bool isNeg = true;
        if(num > 0)isNeg = false; 
        num = abs(num); 
        if(num/10 == 0){
            if(!isNeg) return num;
            return -num;
        } 

        vector<int>vec;
        int count = 0;
        while(num > 0){
            int rem = num%10;
            if(rem == 0)count++;
            else vec.push_back(rem);
            num /= 10;
        }

        if(!isNeg)sort(vec.begin(), vec.end());
        else sort(vec.begin(), vec.end(), greater<int>());
        
        long long ans = vec[0];
        if(!isNeg){
            while(count > 0){
                ans = ans*10;
                count--;
            }
            for(int i = 1; i < vec.size(); i++){
                ans *= 10;
                ans += vec[i];
            }
        }else{
            for(int i = 1; i < vec.size(); i++){
                ans *= 10;
                ans += vec[i];
            }
            while(count > 0){
                ans = ans*10;
                count--;
            }
            ans = -ans;
        }
        return ans;
    }
};
