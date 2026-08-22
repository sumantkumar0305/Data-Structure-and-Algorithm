// Leetcode
// 455. Assign Cookies -> Easy

class Solution {
public:
    int findContentChildren(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int p = 0, t = 0;
        while (p < players.size() && t < trainers.size()) {
            if (trainers[t] >= players[p]) {
                p++; 
            }
            t++; 
        }
        
        return p;
    }
};
