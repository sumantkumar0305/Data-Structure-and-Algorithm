// Leetcode
// 1282. Group the People Given the Group Size They Belong To -> Med.

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        map<int, vector<int>>ma;

        for(int i = 0; i < groupSizes.size(); i++){
            ma[groupSizes[i]].push_back(i);
        }

        for(auto it : ma){
            vector<int>temp;
            int count = 0;
            for(auto i : it.second){
                if(count == it.first){
                    ans.push_back(temp);
                    temp.clear();
                    count = 0;
                }
                temp.push_back(i);
                count++;
            }   
            
            ans.push_back(temp);
        }

        return ans;
    }
};
