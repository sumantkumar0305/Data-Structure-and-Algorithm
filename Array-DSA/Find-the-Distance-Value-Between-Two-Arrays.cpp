// Leetcode
// 1385. Find the Distance Value Between Two Arrays -> Easy

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for(auto it : arr1){
            int count = 0;
            for(auto i : arr2){
                if(abs(i-it) > d)count++;
            }

            if(count == arr2.size())ans++;
        }

        return ans;
    }
};
