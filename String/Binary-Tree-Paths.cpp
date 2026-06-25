// Leetcode
// 257. Binary Tree Paths -> Easy

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
    void temp(vector<string>&ans, TreeNode* root, string str){
        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            return;
        }

        str += to_string(root->val);
        str += "->";

        if(root->left != NULL){
            temp(ans, root->left, str);
        }
        if(root->right != NULL){
            temp(ans, root->right, str);
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;

        temp(ans, root, "");

        return ans;
    }
};
