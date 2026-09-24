// Leetcode
// 567. Permutation in String -> Med.

class Solution {
public:
    bool checkInclusion(string p, string s) {
        int n = p.length(), m = s.length();
        if(n > m)return {};

        unordered_map<char, int>un;
        for(auto it : p){
            un[it]++;
        }
        unordered_map<char, int>u;

        for(int i = 0; i < n; i++){
            u[s[i]]++;
        }
        int l = 0;

        for(int i = n; i < m; i++){
            if(un == u)return true;
            u[s[i]]++;
            u[s[l]]--;
            if(u[s[l]] == 0)u.erase(s[l]);
            l++;
        }
        if(un == u)return true;

        return false;
    }
};
