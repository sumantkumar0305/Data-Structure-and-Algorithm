// LeetCode
// 106. Construct Binary Tree from Inorder and Postorder Traversal -> Med

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
    int find(vector<int>&in, int val, int st, int end){
        for(int i = st; i <= end; i++){
            if(in[i] == val) return i;
        }
        return -1;
    }

    TreeNode* build(TreeNode* root, vector<int>&pre, vector<int>&in, int &p, int st, int end){
        if(p < 0 || st > end) return NULL;
        int i = find(in, pre[p], st, end);
        if(i == -1) return NULL;

        root = new TreeNode(pre[p]);

        p--;
        root->right = build(root->right, pre, in, p, i, end);
        root->left = build(root->left, pre, in, p, st, i);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root = NULL;
        int p = postorder.size()-1;
        root = build(root, postorder, inorder, p, 0, postorder.size()-1);

        return root;
    }
};
