// Leetcode
// 387. First Unique Character in a String -> Easy

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>un;

        for(auto it : s){
            un[it]++;
        }

        for(int i = 0; i < s.length(); i++){
            if(un[s[i]] == 1)return i;
        }
        return -1;
    }
};
