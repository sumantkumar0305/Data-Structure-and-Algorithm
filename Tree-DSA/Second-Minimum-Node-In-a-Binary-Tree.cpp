// LeetCode
// 671. Second Minimum Node In a Binary Tree -> Easy

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
    long ans = LONG_MAX;
    int min1;

    void in(TreeNode* root) {
        if (!root) return;

        if (root->val > min1 && root->val < ans) {
            ans = root->val;
        }

        in(root->left);
        in(root->right);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        if (!root) return -1;

        min1 = root->val;
        in(root);

        return ans == LONG_MAX ? -1 : ans;
    }
};
