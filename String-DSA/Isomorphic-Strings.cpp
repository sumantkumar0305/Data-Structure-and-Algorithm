// Leetcode
// 205. Isomorphic Strings -> Easy

class Solution {
public:
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
};
