// Leetcode
// 222. Count Complete Tree Nodes -> Med.

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
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        if (leftHeight == rightHeight) {
            // Left subtree is a perfect binary tree
            return (1 << leftHeight) + countNodes(root->right);
        }
        else {
            // Right subtree is a perfect binary tree
            return (1 << rightHeight) + countNodes(root->left);
        }
    }

private:
    int getHeight(TreeNode* root) {
        int height = 0;

        while (root != NULL) {
            height++;
            root = root->left;
        }

        return height;
    }
};
