// LeetCode
// 563. Binary Tree Tilt -> Easy

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
    
    int temp(TreeNode* root){
        if(root == NULL) return 0;

        int l = temp(root->left);
        int r = temp(root->right);
        int va = l+r+root->val;
        // root->val = abs(l-r);
        sum += abs(l-r);
        return va;
    }
    int sum = 0;
    int te(TreeNode* root){
        if(root == NULL) return 0;
        
        int l = te(root->left);
        int r = te(root->right);

        return l+r+root->val;
    }
public:
    int findTilt(TreeNode* root) {
        temp(root);

        te(root);
        return sum;
    }
};
