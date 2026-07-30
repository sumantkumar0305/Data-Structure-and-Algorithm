// Leetcode
// 3121. Count the Number of Special Characters II -> Med

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int>low;
        unordered_map<char, int>uper;
        
        for(int i = 0; i < word.length(); i++){
            int val = int(word[i]);

            if(val >= 65 && val <= 90){
                if(uper.count(word[i]) > 0){
                    uper[word[i]] = min(uper[word[i]], i);
                }else{
                    uper[word[i]] = i;
                }
            }else{
                if(low.count(word[i]) > 0){
                    low[word[i]] = max(low[word[i]], i);
                }else{
                    low[word[i]] = i;
                }
            }
        }

        int ans = 0;
        for(auto it : low){
            char ch = char(it.first-32);
            if(uper.count(ch) > 0 && it.second < uper[ch]){
                ans++;
            }
        }

        return ans;
    }
};
