// Leetcode
// 94. Binary Tree Inorder Traversal -> Easy

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
    void inorder(vector<int>&vec, TreeNode* root){
        if(root == NULL) return;

        inorder(vec, root->left);
        vec.push_back(root->val);
        inorder(vec, root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        inorder(vec, root);

        return vec;
    }
};
