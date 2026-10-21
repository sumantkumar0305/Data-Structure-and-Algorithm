// Leetcode
// 124. Binary Tree Maximum Path Sum -> Hard

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
    int ans = INT_MIN;
    int MaxVal(TreeNode* root){
        if(root == NULL)return 0;

        int left = max(0, MaxVal(root->left));
        int right = max(0, MaxVal(root->right));

        ans = max(ans, left+right+root->val);

        return max(left, right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        MaxVal(root);

        return ans;
    }
};
