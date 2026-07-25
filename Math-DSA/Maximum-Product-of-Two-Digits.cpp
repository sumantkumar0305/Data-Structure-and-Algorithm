// Leetcode
// 3536. Maximum Product of Two Digits -> Easy

class Solution {
public:
    int maxProduct(int n) {
        unordered_map<int, int>un;

        int temp = n;
        while(temp > 0){
            int rem = temp%10;
            temp /= 10;
            un[rem]++;
        }

        int maxVal = INT_MIN;
        for(auto it : un){
            maxVal = max(maxVal, it.first);
        }
        int ans;

        if(un[maxVal] > 1){
            ans = maxVal*maxVal;
            return ans;
        }

        int secMax = INT_MIN;
        for(auto it : un){
            if(it.first < maxVal){
                secMax = max(secMax, it.first);
            }
        }

        return maxVal*secMax;
    }
};
