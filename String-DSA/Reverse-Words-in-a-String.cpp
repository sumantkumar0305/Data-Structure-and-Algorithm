// Leetcode
// 151. Reverse Words in a String -> Med.

class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec;
        string res = "";

        for(auto it : s){
            if(it == ' '){
                if(res != "")vec.push_back(res);
                res = "";
                continue;
            }

            res += it;
        }
        if(res != "")vec.push_back(res);

        reverse(vec.begin(), vec.end());
        res = "";
        for(auto it : vec){
            res += it;
            res += ' ';
        }
        res.pop_back();

        return res;
    }
};
