//GFG
//Smallest Positive Missing  -> Medium

class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        
        int i = 1;
        unordered_set<int>un;
        
        for(auto it : arr){
            un.insert(it);
        }
        
        while(un.count(i) != 0){
            i++;
        }
        
        return i;
    }
};
