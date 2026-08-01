// Leetcode
// 398. Random Pick Index -> Med.

class Solution {
    vector<int>num;
public:
    Solution(vector<int>& nums) {
        this->num = nums;
    }
    
    int pick(int target) {
        vector<int>temp;
        for(int i = 0; i < num.size(); i++){
            if(num[i] == target)temp.push_back(i);
        }

        int randomNumber = rand()%temp.size();

        return temp[randomNumber];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
