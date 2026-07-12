// Leetcode
// 1331. Rank Transform of an Array -> Easy

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<int>temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int, int>un;
        int idx = 1;

        for(int i = 0; i < arr.size(); i++){
            if(un.count(temp[i]) == 0){
                un[temp[i]] = idx++;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = un[arr[i]];
        }

        return arr;
    }
};
