// Leetcode
// 1189. Maximum Number of Balloons -> Easy

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int>un;
        string str = "ballon";

        for(auto it : text){
            if(it == 'b' || it == 'a' || it == 'l' || it == 'o' || it == 'n'){
                un[it]++;
            }
        }

        un['l'] /= 2;
        un['o'] /= 2;

        int minVal = INT_MAX;
        for(auto it : str){
            minVal = min(minVal, un[it]);
        }

        return minVal;
    }
};
