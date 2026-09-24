// Leetcode
// 438. Find All Anagrams in a String -> Med.

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length(), m = s.length();
        if(n > m)return {};

        unordered_map<char, int>un;
        string str = "";
        for(auto it : p){
            un[it]++;
        }
        unordered_map<char, int>u;
        vector<int>ans;

        for(int i = 0; i < n; i++){
            u[s[i]]++;
        }
        int l = 0;

        for(int i = n; i < m; i++){
            if(un == u)ans.push_back(l);
            u[s[i]]++;
            u[s[l]]--;
            if(u[s[l]] == 0)u.erase(s[l]);
            l++;
        }
        if(un == u)ans.push_back(l);

        return ans;
    }
};
