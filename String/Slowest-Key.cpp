// Leetcode
// 1629. Slowest Key -> Easy

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int>vec(26, 0);

        vec[keysPressed[0]-'a'] = releaseTimes[0];
        for(int i = 1; i < releaseTimes.size(); i++){
            int duration = releaseTimes[i]-releaseTimes[i-1];
            int idx = keysPressed[i]-'a';
            vec[idx] = max(duration, vec[idx]);
        }

        int maxVal = INT_MIN;
        for(auto it : vec){
            maxVal = max(maxVal, it);
        }

        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(vec[i] == maxVal){
                ans = i;
            }
        }

        return 'a'+ans;
    }
};
