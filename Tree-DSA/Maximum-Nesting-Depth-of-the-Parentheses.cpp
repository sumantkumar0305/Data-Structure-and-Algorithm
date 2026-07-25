// Leetcode
// 1614. Maximum Nesting Depth of the Parentheses -> Easy

class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans = 0;

        for(auto it : s){
            if(it == '('){
                st.push(it);
            }else if(it == ')'){
                int size = st.size();
                ans = max(ans, size);
                st.pop();
            }
        }

        return ans;
    }
};
