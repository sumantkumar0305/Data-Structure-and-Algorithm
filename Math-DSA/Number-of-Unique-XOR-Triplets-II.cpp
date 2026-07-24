// Leetcode
// 3514. Number of Unique XOR Triplets II -> Med.

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxXor = 2048;

        vector<bool>twoXor(maxXor, false);

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                int a = nums[i]^nums[j];
                twoXor[a] = true;
            }   
        }

        vector<bool>tripletXor(2048, false);

        for(int i = 0; i < 2048; i++){
            if(!twoXor[i]) continue;
            for(auto it : nums){
                tripletXor[it^i] = true;
            }
        }

        int ans = 0;
        for(auto it : tripletXor){
            if(!it)continue;
            ans++;
        }

        return ans;
    }
};
