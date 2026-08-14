// Leetcode
// 3211. Generate Binary Strings Without Adjacent Zeros -> Med.

class Solution {
    vector<string>ans;
    void helper(string &s, int i, int n){
        if(i == n){
            ans.push_back(s);
            return;
        }

        s.push_back('1');
        helper(s, i+1, n);
        s.pop_back();

        if(i == 0 || s[i-1] != '0'){
            s.push_back('0');
            helper(s, i+1, n);
            s.pop_back();
        }
    }
public:
    vector<string> validStrings(int n) {
        string sub;
        helper(sub, 0, n);

        return ans;
    }
};
