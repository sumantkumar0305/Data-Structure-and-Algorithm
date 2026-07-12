// Leetcode
// 2404. Most Frequent Even Element -> Easy

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int>un;

        for(auto it : nums){
            un[it]++;
        }

        int ans = -1, occur = -1;
        for(auto it : un){
            if(it.first%2 == 0){
                if(it.second > occur){
                    ans = it.first;
                    occur = it.second;
                }else if(it.second == occur){
                    ans = min(ans, it.first);
                }
            }
        }

        return ans;
    }
};
