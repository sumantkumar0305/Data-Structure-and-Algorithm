// Leetcode
// 17. Letter Combinations of a Phone Number -> Med.

class Solution {
    void solve(int idx, string &digits, vector<string> &str,
               string &curr, vector<string> &ans) {

        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        int num = digits[idx] - '2';

        for (char ch : str[num]) {
            curr.push_back(ch);
            solve(idx + 1, digits, str, curr, ans);
            curr.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string>str(8);
        str[0] = "abc";
        str[1] = "def";
        str[2] = "ghi";
        str[3] = "jkl";
        str[4] = "mno";
        str[5] = "pqrs";
        str[6] = "tuv";
        str[7] = "wxyz";

        vector<string>ans;
        string curr = "";
        solve(0, digits, str, curr, ans);

        return ans;
    }
};
