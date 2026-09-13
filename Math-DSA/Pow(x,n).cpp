// Leetcode
// 50. Pow(x, n) -> Med.

class Solution {
    vector<int> convertIntoBinary(long long n){
        vector<int>ans;
        while(n>0){
            ans.push_back(n%2);
            n /= 2;
        }
        
        return ans;
    }
public:
    double myPow(double x, int n) {
        long long a = abs(1LL*n);
        vector<int>binary = convertIntoBinary(a);
        double ans = 1.0;
        for(auto it : binary){
            if(it != 0){
                ans = ans*x;
            }
            x = x*x;
        }

        if(n < 0)return 1.0/ans;

        return ans;
    }
};
