// Leetcode
// 692. Top K Frequent Words -> Med.

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>un;
        for(auto it : words){
            un[it]++;
        }

        vector<pair<string, int>> vec(un.begin(), un.end());

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });

        vector<string>ans;
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
