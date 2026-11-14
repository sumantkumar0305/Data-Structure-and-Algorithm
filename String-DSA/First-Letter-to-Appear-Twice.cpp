// Leetcode
// 2351. First Letter to Appear Twice -> Easy

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int>un;

        for(auto it : s){
            un[it]++;
            if(un[it] == 2)return it;
        }

        return 'a';
    }
};
