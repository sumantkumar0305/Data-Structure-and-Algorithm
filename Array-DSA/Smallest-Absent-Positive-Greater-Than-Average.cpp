// Leetcode
// 3678. Smallest Absent Positive Greater Than Average -> Easy

class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int>un(nums.begin(), nums.end());

        int sum = 0;
        for(auto it : nums){
            sum += it;
        }
        int n = sum/(int)(nums.size());

        n++;
        if(n <= 0)n=1;
        while(un.count(n)){
            n++;
        }

        return n;
    }
};
