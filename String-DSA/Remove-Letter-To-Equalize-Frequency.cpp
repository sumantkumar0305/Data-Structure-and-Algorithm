// Leetcode
// 2423. Remove Letter To Equalize Frequency -> Easy

class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> count(26, 0);
        for (char c : word) {
            count[c - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (count[i] == 0) continue;
            count[i]--;
            
            int commonFreq = 0;
            bool possible = true;
            
            for (int j = 0; j < 26; j++) {
                if (count[j] == 0) continue;
                if (commonFreq == 0) {
                    commonFreq = count[j];
                } else if (count[j] != commonFreq) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) return true;
            count[i]++;
        }
        
        return false;
    }
};
