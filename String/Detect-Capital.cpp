// Leetcode
// 520. Detect Capital -> Easy

class Solution {
public:
    bool detectCapitalUse(string word) {
        int low = 0; 
        int uper = 0;

        for(auto it : word){
            int val = int(it);

            if(val >= 65 && val <= 90){
                uper++;
            }else{
                low++;
            }
        }

        if(low == 0 || uper == 0) return true;
        if(uper == 1){
            if(int(word[0]) >= 65 && int(word[0]) <= 90){
                return true;
            }
        }

        return false;
    }
};
