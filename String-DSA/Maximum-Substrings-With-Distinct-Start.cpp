// Leetcode
// 3760. Maximum Substrings With Distinct Start -> Med.

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>un;

        for(auto it : s){
            un.insert(it);
        }

        return un.size();
    }
};
