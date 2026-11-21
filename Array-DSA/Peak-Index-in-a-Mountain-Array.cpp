// Leetcode
// 852. Peak Index in a Mountain Array -> Med.

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max_val = INT_MIN, idx;
        
        for(int i = 0; i < arr.size(); i++){
            if(max_val < arr[i]){
                max_val = arr[i];
                idx = i;
            }
        }

        return idx;
    }
};
