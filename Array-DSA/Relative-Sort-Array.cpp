// LeetCode
// 1122. Relative Sort Array -> Easy

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        unordered_map<int,int>un;
        
        for(auto it : arr1){
            un[it]++;
        }

        for(auto it : arr2){
            while(un[it] > 0){
                ans.push_back(it);
                un[it]--;
            }
        }

        arr2.clear();

        for(auto it : un){
            if(it.second > 0){
                arr2.push_back(it.first);
            }
        }

        sort(arr2.begin(), arr2.end());

        for(auto it : arr2){
            while(un[it] > 0){
                ans.push_back(it);
                un[it]--;
            }
        }

        return ans;
    }
};
