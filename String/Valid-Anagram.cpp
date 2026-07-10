// Leetcode
// 242. Valid Anagram -> Easy

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>un1, un2;

        for(auto it : s){
            un1[it]++;
        }
        for(auto it : t)un2[it]++;

        if(un1.size() != un2.size()) return false;
        for(auto it : un1){
            if(it.second != un2[it.first]) return false;
        }

        return true;
    }
};
