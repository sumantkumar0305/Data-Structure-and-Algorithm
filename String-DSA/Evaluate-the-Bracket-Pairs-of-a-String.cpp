// Leetcode
// 1807. Evaluate the Bracket Pairs of a String -> Med.

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string>un;
    
        for(auto it : knowledge){
            un[it[0]] = it[1];
        }

        string ans = "", str = "";
        bool isBarcket = false;
        for(auto it : s){
            if(it == ')'){
                isBarcket=false;
                if(un.count(str)){
                    ans += un[str];
                }else{
                    ans += '?';
                }
                str = "";
            }
            if(isBarcket)str += it;
            if(it == '(')isBarcket = true;

            if(!isBarcket && it != ')')ans += it;

        }

        return ans;
    }
};
