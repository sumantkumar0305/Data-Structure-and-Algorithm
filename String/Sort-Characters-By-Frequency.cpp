// Leetcode
// 451. Sort Characters By Frequency -> Med.

class Solution {
public:
    string frequencySort(string s) {
         map<char, int>un;

        for(auto it : s){
            un[it]++;
        }

        string ans = "";

        vector<pair<char,int>> vec(un.begin(), un.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        for (auto &it : vec) {
            int i = it.second;
            while(i > 0){
                ans += it.first;
                i--;
            }
        }

        return ans;
    }
};
