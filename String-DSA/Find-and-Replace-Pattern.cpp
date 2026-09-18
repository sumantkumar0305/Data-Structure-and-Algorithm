// Leetcode
// 890. Find and Replace Pattern -> Med.

class Solution {
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>un;

        for(int i = 0; i < s.length(); i++){
            if(un.count(s[i])){
                if(un[s[i]] != t[i])return false;
            }
            un[s[i]] = t[i];
        }

        un.clear();
         for(int i = 0; i < s.length(); i++){
            if(un.count(t[i])){
                if(un[t[i]] != s[i])return false;
            }
            un[t[i]] = s[i];
        }

        return true;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;

        for(auto it : words){
            if(isIsomorphic(pattern, it))ans.push_back(it);
        }

        return ans;
    }
};
