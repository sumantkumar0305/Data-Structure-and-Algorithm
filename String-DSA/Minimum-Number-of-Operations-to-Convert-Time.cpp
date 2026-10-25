// leetcode
// 2224. Minimum Number of Operations to Convert Time -> Easy

class Solution {
public:
    int convertTime(string current, string correct) {
        int fH = stoi(current.substr(0, 2));
        int sH = stoi(correct.substr(0,2));

        int fM = stoi(current.substr(3, 2));
        int sM = stoi(correct.substr(3, 2));
        int total = 1439;

        int first = fH*60+fM;
        int sec = sH*60+sM;

        int minu = sec-first;
        if(minu == 0)return 0;
        if(minu < 0){
            minu = total+minu;
        }

        int ans = 0;
        while(minu >= 60){
            ans++;
            minu -= 60;
        }

        while(minu >= 15){
            ans++;
            minu -= 15;
        }

        while(minu >= 5){
            ans++;
            minu -= 5;
        }

        ans += minu;

        return ans;
    }
};
