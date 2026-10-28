// GFG
// Digital Root -> Easy 

class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        if(n < 10)return n;
        
        while(n > 9){
            int sum = 0;
            
            while(n > 0){
                sum = sum + (n%10);
                n /= 10;
            }
            
            n = sum;
        }
        
        return n;
    }
};
