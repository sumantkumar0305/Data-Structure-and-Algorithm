// GFG
// K-th Missing in Sorted -> Easy

class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        // Code here
        
        vector<int>vec;
        
        unordered_set<int>un(arr.begin(), arr.end());
        for(int i = arr[0]; i < arr[arr.size()-1]; i++){
            if(un.count(i) == 0)vec.push_back(i);
        }
        
        if(vec.size() < k)return -1;
        
        return vec[k-1];
    }
};
