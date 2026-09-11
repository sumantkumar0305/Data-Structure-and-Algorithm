// Leetcode
// 3483. Unique 3-Digit Even Numbers -> Easy

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int>un;

        for(int i = 0; i < digits.size(); i++){
            if(digits[i] == 0)continue;
            for(int j = 0; j < digits.size(); j++){
                if(i == j)continue;
                for(int k = 0; k < digits.size(); k++){
                    if(i== k || j == k)continue;
                    if(digits[k]%2 != 0)continue;

                    int sum = digits[i]*100+digits[j]*10+digits[k];
                    un.insert(sum);
                }
            }
        }

        return un.size();
    }
};
