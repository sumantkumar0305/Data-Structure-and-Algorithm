// Leetcode
// 3090. Maximum Length Substring With Two Occurrences -> Easy

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0;
        int l = 0;
        unordered_map<char, int>un;
        
        for(int r = 0; r < s.length(); r++){
            un[s[r]]++;

            while(un[s[r]] > 2){
                un[s[l]]--;
                l++;
            }

            ans = max(ans, (r-l+1));
        }

        return ans;
    }
};
