// leetcode
// 804. Unique Morse Code Words -> Easy

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string, int>un;

        for(auto it : words){
            string temp = "";
            for(auto i : it){
                temp += vec[i-'a'];
            }

            un[temp]++;
        }

        return un.size();
    }
};
