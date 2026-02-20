//GFG
//Union of 2 Sorted Arrays

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>un;
        
        for(auto it : a){
            un.insert(it);
        }
        
        for(auto it : b){
            un.insert(it);
        }
        
        vector<int>ans;
        for(auto it : un){
            ans.push_back(it);
        }
        
        return ans;
    }
};
