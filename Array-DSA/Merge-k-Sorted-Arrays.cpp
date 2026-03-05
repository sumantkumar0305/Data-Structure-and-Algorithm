//GFG
//Merge k Sorted Arrays -> Med.

class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        vector<int>temp;
        
        for(auto it : mat){
            for(auto i : it){
                temp.push_back(i);
            }
        }
        
        sort(temp.begin(), temp.end());
        
        return temp;
    }
};
