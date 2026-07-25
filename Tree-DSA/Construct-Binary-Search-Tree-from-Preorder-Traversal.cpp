// Leetcode
// 1008. Construct Binary Search Tree from Preorder Traversal -> Med.

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
    TreeNode* create(TreeNode* root, int val){
        if(root == NULL) return new TreeNode(val);

        if(val < root->val){
            root->left = create(root->left, val);
        }else{
            root->right = create(root->right, val);
        }

        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;

        for(auto it : preorder){
            root = create(root, it);
        }

        return root;
    }
};
