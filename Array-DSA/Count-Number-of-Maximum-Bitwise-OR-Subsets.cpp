// Leetcode
// 2044. Count Number of Maximum Bitwise-OR Subsets -> Med.

class Solution {
    int findOR(vector<int>&num){
        int OR = 0;
        
        for(auto it : num){
            OR |= it;
        }

        return OR;
    }

    vector<vector<int>>sub;
    void subset(int st, vector<int>&num, vector<int>&curr, int OR){
        if(findOR(curr) == OR){
            sub.push_back(curr);
        }

        for(int i = st; i < num.size(); i++){
            curr.push_back(num[i]);
            subset(i+1, num, curr, OR);
            curr.pop_back();
        }
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int>curr;
        int OR = findOR(nums);
        subset(0, nums, curr, OR);

        return sub.size();
    }
};
