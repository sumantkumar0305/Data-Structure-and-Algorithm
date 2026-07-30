//LeetCode
//3. Longest Substring Without Repeating Characters -> Med

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        int ans = 0, st = 0;
        unordered_set<char>un;

        un.insert(s[st]);

        for(int end = 1; end < s.length(); end++){
            if(un.count(s[end])){
                ans = max(ans, (int)un.size());
                un.erase(s[st]);
                st++;

                while(un.count(s[end]) && st < end){
                    un.erase(s[st]);
                    st++;
                }
            }

            un.insert(s[end]);
        }

        return max(ans, (int)un.size());
    }
};
