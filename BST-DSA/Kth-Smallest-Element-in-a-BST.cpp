// Leetcode
// 230. Kth Smallest Element in a BST -> Easy

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
    int idx = 0;
    int ans;
    void inorder(TreeNode* root, int k){
        if(root == NULL) return;

        if(idx > k) return;
        inorder(root->left, k);
        idx++;
        if(idx == k){
            ans = root->val;
            idx++;
            return;
        }
        inorder(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);

        return ans;
    }
};
