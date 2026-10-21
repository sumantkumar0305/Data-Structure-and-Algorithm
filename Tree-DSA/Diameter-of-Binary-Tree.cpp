// Leetcode
// 543. Diameter of Binary Tree -> Easy

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
    int Height(TreeNode* root){
        if(root == NULL)return 0;

        int leftVal = Height(root->left);
        int rightVal = Height(root->right);

        return max(leftVal, rightVal)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;

        queue<TreeNode* > q;
        q.push(root);

        while(q.size() > 0){
            int temp = Height(q.front()->left)+Height(q.front()->right);
            ans = max(ans, temp);

            if(q.front()->left != NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right != NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }

        return ans;
    }
};
