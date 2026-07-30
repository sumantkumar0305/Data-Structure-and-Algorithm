// Leetcode
// 49. Group Anagrams -> Med.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        if(strs.size() == 0){
            ans.push_back(strs);
            return ans;
        }
        unordered_map<string, vector<string>>un;

        for(auto it : strs){
            string temp = it;
            sort(temp.begin(), temp.end());
            un[temp].push_back(it);
        }

        for(auto it : un){
            ans.push_back(it.second);
        }

        return ans;
    }
};
