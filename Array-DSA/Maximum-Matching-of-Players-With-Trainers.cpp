// Leetcode
// 2410. Maximum Matching of Players With Trainers -> Med.

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int ans = 0;
        int idx = -1;
        for(auto it : players){
            for(int i = idx+1; i < trainers.size(); i++){
                if(trainers[i] >= it){
                    idx = i;
                    ans++;
                    break;
                }    
            }
        }

        return ans;
    }
};
