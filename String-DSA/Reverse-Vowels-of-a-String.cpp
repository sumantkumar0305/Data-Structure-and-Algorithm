// Leetcode
// 345. Reverse Vowels of a String -> Easy

class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vec;
        unordered_set<char>un;

        un.insert('a'); un.insert('e'); un.insert('i'); un.insert('o'); un.insert('u');
        un.insert('A'); un.insert('E'); un.insert('I'); un.insert('O'); un.insert('U');
        
        for(auto it : s){
            if(un.count(it)){
                vec.push_back(it);
            }
        }

        reverse(vec.begin(), vec.end());

        int k = 0;
        for(int i = 0; i < s.length(); i++){
            if(un.count(s[i])){
                s[i] = vec[k++];
            }
        }

        return s;
    }
};
