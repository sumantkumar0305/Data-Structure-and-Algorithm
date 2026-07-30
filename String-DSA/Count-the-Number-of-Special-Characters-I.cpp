// Leetcode
// 3120. Count the Number of Special Characters I -> Easy

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>low(26, 0);
        vector<int>uper(26, 0);

        for(auto it : word){
            int val = int(it);

            if(val >= 65 && val <= 90){
                int idx = it-'A';

                uper[idx]++;
            }else if(val >= 97 && val <= 122){
                int idx = it-'a';
                low[idx]++;
            }
        }

        int ans = 0;

        for(auto it : word){
            int val = int(it);
            if(val >= 65 && val <= 90){
                int idx = it-'A';
                if(low[idx] != 0){
                    ans++;
                    low[idx] = 0;
                    uper[idx] = 0;
                }
            }else if(val >= 97 && val <= 122){
                int idx = it-'a';
                if(uper[idx] != 0){
                    ans++;
                    uper[idx] = 0;
                    low[idx] = 0;
                }
            }
        }

        return ans;
    }
};
