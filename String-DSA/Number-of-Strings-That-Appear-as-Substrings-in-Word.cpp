// Leetcode
// 1967. Number of Strings That Appear as Substrings in Word -> Easy

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (const string& s : patterns)
            if (word.find(s) != string::npos) count++;
        return count;
    }
};
