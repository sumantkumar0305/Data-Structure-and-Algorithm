// Leetcode
// 414. Third Maximum Number -> Easy

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN;
        for(auto it : nums){
            first = max(it, first);
        }
        
        // For second max val
        int second = INT_MIN;
        for(auto it : nums){
            if(it < first){
                second = max(second, it);
            }
        }

        // For third max val
        int third = INT_MIN;
        for(auto it : nums){
            if(it < second){
                third = max(third, it);
            }
        }

        if(second == third) return first;

        for(auto it : nums){
            if(it == third) return it;
        }
        
        if(third == INT_MIN) return first;

        return third;
    }
};
