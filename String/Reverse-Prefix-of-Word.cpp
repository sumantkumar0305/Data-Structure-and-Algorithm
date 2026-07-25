// Leetcode
// 2000. Reverse Prefix of Word -> Easy

class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int i = 0;
        while(i < word.length() && word[i] != ch){
            st.push(word[i++]);
        }

        if(st. size() == word.length() && st.top() != ch) return word;
        st.push(word[i]);

        for(int k = 0; k <= i; k++){
            word[k] = st.top();
            st.pop();
        }

        return word;
    }
};
