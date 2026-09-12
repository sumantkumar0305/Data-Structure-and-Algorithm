// Leetcode
// 969. Pancake Sorting -> Med.

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>ans;
        
        for(int i = arr.size()-1; i > 0; i--){
            int maxIdx = max_element(arr.begin(), arr.begin()+i+1)-arr.begin();

            if(maxIdx == i) continue;
            if (maxIdx != 0) {
                reverse(arr.begin(), arr.begin() + maxIdx + 1);
                ans.push_back(maxIdx + 1);
            }
            for(auto it : arr){
                cout<<it<<" ";
            }
            cout<<endl;

            reverse(arr.begin(), arr.begin()+i+1);
            ans.push_back(i+1);
        }

        return ans;
    }
};
