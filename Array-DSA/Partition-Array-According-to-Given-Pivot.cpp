// Leetcode
// 2161. Partition Array According to Given Pivot -> Med.

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;

        for(auto it : nums){
            if(it < pivot){
                small.push_back(it);
            }
        }

        for(auto it : nums){
            if(it == pivot){
                small.push_back(it);
            }
        }

        for(auto it : nums){
            if(it > pivot){
                small.push_back(it);
            }
        }

        return small;
    }
};
