// Leetcode
// 686. Repeated String Match -> Med.

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = a;
        int ans = 1;
        while(s.length() < b.length()){
            s += a;
            ans++;
        }
        size_t pos = s.find(b);
        if(pos != string::npos) return ans;
        s += a;
        pos = s.find(b);
        if(pos != string::npos) return ans+1;

        return -1;
    }
};
