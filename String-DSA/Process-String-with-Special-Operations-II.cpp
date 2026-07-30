// Leetcode
// 3614. Process String with Special Operations II -> Hard

class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        const long long INF = 1e18;

        vector<long long> len(n);

        long long cur = 0;

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                cur++;
            }
            else if (ch == '*') {
                if (cur > 0) cur--;
            }
            else if (ch == '#') {
                cur = min(INF, cur * 2);
            }

            len[i] = cur;
        }

        if (k >= cur) return '.';

        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            long long prevLen = (i == 0 ? 0 : len[i - 1]);

            if ('a' <= ch && ch <= 'z') {
                if (k == prevLen) return ch;
            }
            else if (ch == '#') {
                if (prevLen > 0)
                    k %= prevLen;
            }
            else if (ch == '%') {
                k = prevLen - 1 - k;
            }
        }

        return '.';
    }
};
