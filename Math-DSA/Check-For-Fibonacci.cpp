// GFG
// Check For Fibonacci -> Easy

class Solution {
  public:
    bool isFibonacci(int n) {
        // code here
        if(n == 0 || n == 1)return true;
        
        int prev = 1, curr = 1;
        
        while(curr <= n){
            int temp = curr;
            curr = curr+prev;
            
            prev = temp;
        }
        
        return prev == n;
    }
};
