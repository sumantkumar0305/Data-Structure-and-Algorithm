// LeetCode
// 110. Balanced Binary Tree -> Easy

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
    int height (TreeNode* root){

        if(root == NULL) return -1;

        int left = height(root->left);
        int right = height(root->right);

        return max(left,right)+1;
    }

    bool check(TreeNode* root){
        if(root == NULL) return true;
        int l = height(root->left);
        int r = height(root->right);

        return abs(l-r) < 2;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        queue<TreeNode* >q;
        q.push(root);

        while(q.size() > 0){
            TreeNode* temp = q.front();
            q.pop();
            if(!check(temp)) return false;
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL)q.push(temp->right);
        }

        return true;
    }
};
