// Leetcode
// 145. Binary Tree Postorder Traversal -> Easy

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
    void helper(vector<int>&vec, TreeNode* root){
        if(root == NULL) return;

        helper(vec, root->left);
        helper(vec, root->right);
        vec.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        helper(vec, root);

        return vec;
    }
};
