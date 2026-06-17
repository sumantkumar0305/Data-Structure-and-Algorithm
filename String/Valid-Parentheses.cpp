// Leetcode
// 20. Valid Parentheses -> Easy

class Solution {
public:
    bool isValid(string s) {
            stack<char>st;

        for(auto it : s){
            if(it == '(' || it == '{' || it == '[') st.push(it);
            else if(!st.empty() ){
                if((it == ')' && st.top() == '(') || (it == ']' && st.top() == '[') || (it == '}' && st.top() == '{')) st.pop();
                else return false;
            }else return false;
        }

        if(!st.empty()) return false;

        return true;
    }
};
