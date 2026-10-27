// Leetcode
// 383. Ransom Note -> Easy

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>un;

        for(auto it : magazine){
            un[it]++;
        }

        for(auto it : ransomNote){
            if(un[it] <= 0)return false;
            un[it]--;
        }

        return true;
    }
};
