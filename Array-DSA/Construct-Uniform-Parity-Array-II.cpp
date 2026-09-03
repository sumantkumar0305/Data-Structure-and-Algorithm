// Leetcode
// 3876. Construct Uniform Parity Array II -> Med.

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minVal = INT_MAX;

        for(auto it : nums1){
            minVal = min(minVal, it);
        }

        if(minVal%2 == 0){
            for(auto it : nums1){
                if(it == minVal) continue;
                if(it%2 != 0){
                    if(abs(it-minVal) < 1)return false;
                    else if(abs(it-minVal)%2 != 0) return false;
                }
            }
        }else{
            for(auto it : nums1){
                if(it == minVal) continue;
                if(it%2 == 0){
                    if(abs(it-minVal) < 1)return false;
                    else if(abs(it-minVal)%2 == 0) return false;
                }
            }
        }

        return true;
    }
};
