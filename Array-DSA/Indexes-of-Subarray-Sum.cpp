//GFG
//Indexes of Subarray Sum -> Med

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int sum = 0, st = 0;

        for(int end = 0; end < arr.size(); end++){
            sum += arr[end];
    
            while(sum > target && st < end){
                sum -= arr[st];
                st++;
            }
    
            if(sum == target){
                return {st+1, end+1};
            }
        }
    
        return {-1};
    }
};
