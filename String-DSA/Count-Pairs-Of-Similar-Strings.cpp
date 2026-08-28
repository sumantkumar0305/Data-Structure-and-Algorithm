// Leetcode
// 2506. Count Pairs Of Similar Strings -> Easy

class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {

                set<char> s1(words[i].begin(), words[i].end());
                set<char> s2(words[j].begin(), words[j].end());

                if (s1 == s2) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
