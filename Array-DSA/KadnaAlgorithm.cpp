int maxSubarraySum(vector<int> &arr) {
        // Code here
        
        if(arr.size() == 1) return arr[0];
        int maxSum = INT16_MIN;
        int currSum =0;
    
        for(auto it : arr){
            currSum += it;
            maxSum = max(maxSum, currSum);
            
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }