// Leetcode
// 653. Two Sum IV - Input is a BST -> Med

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
    void inorder(TreeNode* root, vector<int>&in){
        if(root == NULL) return;

        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>in;
        inorder(root, in);

        unordered_set<int>un;

        for(int i = 0; i < in.size(); i++){
            int tar = k-in[i];
            if(un.count(tar)) return true;
            un.insert(in[i]);
        }

        return false;
    }
};
