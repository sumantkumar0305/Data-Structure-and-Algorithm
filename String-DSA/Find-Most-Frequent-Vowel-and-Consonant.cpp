// Leetcode
// 3541. Find Most Frequent Vowel and Consonant -> Easy

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int>vowel, cons;

        for(auto it : s){
            if((it == 'a') || (it == 'e') || (it == 'i') || (it == 'o') || (it == 'u')){
                vowel[it]++;
            }else{
                cons[it]++;
            }
        }

        int maxVowel = INT_MIN, maxConst = INT_MIN;
        for(auto it : vowel){
            maxVowel = max(maxVowel, it.second);
        }

        for(auto it : cons){
            maxConst = max(maxConst, it.second);
        }

        if(maxConst == INT_MIN){
            return maxVowel;
        }else if(maxVowel == INT_MIN){
            return maxConst;
        }

        return maxVowel + maxConst;
    }
};
