// Leetcode
// 290. Word Pattern -> Easy

class Solution {
public:
    bool wordPattern(string pattern, string s) {
         vector<string>word;
        string str = "";
        
        for(auto it : s){
            if(it == ' '){
                if(str != "")word.push_back(str);
                str = "";
            }else{
                str += it;
            }
        }
        if(str != "")word.push_back(str);

        if(word.size() != pattern.length())return false;

        unordered_map<char, string>un;

        for(int i = 0; i < pattern.length(); i++){
            if(un.count(pattern[i])){
                if(un[pattern[i]] != word[i])return false;
            }
            un[pattern[i]] = word[i];
        }

        unordered_map<string, char>n;
        for(int i = 0; i < pattern.length(); i++){
            if(n.count(word[i])){
                if(n[word[i]] != pattern[i])return false;
            }
            n[word[i]] = pattern[i];
        }

        return true;
    }
};
