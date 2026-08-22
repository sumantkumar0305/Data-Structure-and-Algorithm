// Leetcode
// 2966. Divide Array Into Arrays With Max Difference -> Med.

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
    
        sort(nums.begin(), nums.end());
        int st = 0;
        while(st < nums.size()-1){
            vector<int>vec = {nums[st], nums[st+1], nums[st+2]};

            if(vec[2]-vec[0] <= k){
                ans.push_back(vec);
            }else return {};

            st += 3;
        }

        return ans;
    }
};
