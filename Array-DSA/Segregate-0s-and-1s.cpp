// Geeksforgeeks
// Segregate 0s and 1s -> Easy

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int countZero = 0, countOne = 0;
        
        for(auto it : arr){
            if(it == 0)countZero++;
            else countOne++;
        }
        
        int i = 0;
        while(countZero > 0){
            arr[i++] = 0;
            countZero--;
        }
        
        while(countOne > 0){
            arr[i++] = 1;
            countOne--;
        }
    }
};
