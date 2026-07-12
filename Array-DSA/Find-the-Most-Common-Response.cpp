// leetcode
// 3527. Find the Most Common Response -> Med.

class Solution {
public:
    string findCommonResponse(vector<vector<string>>& res) {
        unordered_map<string, int>un;

        for(auto it : res){
            unordered_set<string>temp;
            for(auto i : it){
                temp.insert(i);
            }
            for(auto i : temp){
                un[i]++;
            }
        }

        string ans;
        int count = -1;
        for(auto it : un){
            if(it.second > count){
                count = it.second;
                ans = it.first;
            }else if(it.second == count){
                ans = min(ans, it.first);
            }
        }

        return ans;
    }
};
