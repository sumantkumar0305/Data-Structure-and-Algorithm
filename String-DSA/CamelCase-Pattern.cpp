//GFG
//CamelCase Pattern Matching -> Med

class Solution {
  public:
    vector<string> camelCase(vector<string> &arr, string &pat) {
        // code here
        vector<string>ans;
    
        for(auto it : arr){
            int idx = 0;
            for(int i = 0; i < it.length(); i++){ 
                if(it[i] >= 'A' && it[i] <= 'Z'){
                    if(idx < pat.size() && it[i] == pat[idx]){
                        idx++;
                    }else break;
                }
            }
    
            if(idx >= pat.size()){
                ans.push_back(it);
            }
        }
    
        return ans;
    }
};
