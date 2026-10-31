// Leetcode
// Adding One to Array -> Easy

class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        vector<int>vec;
        reverse(arr.begin(), arr.end());
        
        int sum = arr[0]+1;
        int rem = sum%10;
        vec.push_back(rem);
        sum /= 10;
        
        for(int i = 1; i < arr.size(); i++){
            int temp = sum+arr[i];
            
            vec.push_back(temp%10);
            sum = temp/10;
        }
        
        while(sum > 0){
            int t = sum%10;
            vec.push_back(t);
            
            sum /= 10;
        }
        
        reverse(vec.begin(), vec.end());
        return vec;
    }
};
