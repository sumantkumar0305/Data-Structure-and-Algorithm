// Leetcode
// 2287. Rearrange Characters to Make Target String -> Easy

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int>un;
        unordered_map<char, int>un2;

        for(auto it : target){
            un2[it]++;
        }

        for(auto it : s){
            if(un2.count(it)){
                un[it]++;
            }
        }

        for(auto it : un2){
            un[it.first] /= it.second;
        }

        int minVal = INT_MAX;
        for(auto it : un2){
            minVal = min(minVal, un[it.first]);
        }

        return minVal;
    }
};
