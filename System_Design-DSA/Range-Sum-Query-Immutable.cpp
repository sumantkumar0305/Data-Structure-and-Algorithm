// Leetcode
// 303. Range Sum Query - Immutable -> Easy

class NumArray {
    vector<int>num;
public:
    NumArray(vector<int>& nums) {
        this->num = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left; i <= right; i++){
            sum += num[i];
        }

        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
