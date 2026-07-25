// Leetcode
// 654. Maximum Binary Tree -> Med.

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
    TreeNode* create(vector<int>&num, int l, int r){
        if(l > r){
            return NULL;
        }

        int maxVal = -1;
        int idx;
        for(int i = l; i <= r; i++){
            if(maxVal < num[i]){
                maxVal = num[i];
                idx = i;
            }
        }

        TreeNode* root = new TreeNode(maxVal);
        root->left = create(num, l, idx-1);
        root->right = create(num, idx+1, r);

        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return create(nums, 0, nums.size()-1);
    }
};
