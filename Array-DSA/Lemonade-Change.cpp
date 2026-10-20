// Leetcode
// 860. Lemonade Change -> Easy

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>vec(3, 0);

        for(auto it : bills){
            if(it == 5)vec[0]++;
            else if(it == 10){
                vec[1]++;
                if(vec[0] > 0){
                    vec[0]--;
                }else return false;
            }
            else{
                vec[2]++;
                if(vec[0] > 0 && vec[1] > 0){
                    vec[0]--;
                    vec[1]--;
                }else if(vec[0] >= 3){
                    vec[0] -= 3;
                }
                else return false;
            }
        }

        return true;
    }
};
