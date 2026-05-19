// Leetcode
// 692. Top K Frequent Words -> Med. 

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int>un;
        vector<string>ans;
        
        for(auto it : words){
            un[it]++;
        }

        vector<pair<string, int>> v(un.begin(), un.end());

        sort(v.begin(), v.end(),
            [](pair<string, int> a, pair<string, int> b) {
                if(a.second == b.second){   // ascending
                    return a.first < b.first;
                }else{
                    return a.second > b.second;
                }
        });


        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
