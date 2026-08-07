// Leetcode
// 2391. Minimum Amount of Time to Collect Garbage -> Med.

class Solution {
    int check(vector<string>&garbage, vector<int>travel, char ch){
        int ans = 0;
        for(int i = garbage.size()-1; i > 0; i--){
            for(auto it : garbage[i]){
                if(it == ch)ans++;
            }
            if(ans != 0)ans += travel[i-1];
        }
        for(auto it : garbage[0]){
            if(it == ch)ans++;
        }

        return ans;
    }
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = check(garbage, travel, 'G') + check(garbage, travel, 'P') + check(garbage, travel, 'M');

        return ans;
    }
};
