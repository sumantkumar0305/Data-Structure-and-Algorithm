// Leetcode
// 28. Find the Index of the First Occurrence in a String -> Easy

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);

        if(pos != string::npos) return pos;

        return -1;
    }
};
