// Leetcode
// 977. Squares of a Sorted Array -> Easy

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>pq;

        for(auto it : nums){
            pq.push(it*it);
        }

        for(int i = 0; i < nums.size(); i++){
            nums[i] = pq.top();
            pq.pop();
        }

        return nums;
    }
};
