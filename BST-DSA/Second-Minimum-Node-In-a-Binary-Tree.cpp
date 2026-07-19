// Leetcode
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
    long long ans = LLONG_MAX;
    int mn;

    void dfs(TreeNode* root) {
        if (!root) return;

        if (root->val > mn && root->val < ans)
            ans = root->val;

        dfs(root->left);
        dfs(root->right);
    }

public:
    int findSecondMinimumValue(TreeNode* root) {
        mn = root->val;
        dfs(root);

        return ans;
    }
};
