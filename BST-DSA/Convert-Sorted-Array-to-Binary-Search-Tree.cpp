// Leetcode
// 108. Convert Sorted Array to Binary Search Tree -> Easy

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* built(vector<int>&nums, int st, int end){
        if(st > end) return NULL;

        int mid = st+(end-st)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = built(nums, st, mid-1);
        root->right = built(nums, mid+1, end);

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return built(nums, 0, nums.size()-1);
    }
};
