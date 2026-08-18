// Leetcode
// 129. Sum Root to Leaf Numbers -> Med.

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
    int ans = 0;
    void helper(TreeNode* root, string &str){
        if(root == NULL) return;

        str += to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            if(str == "") return;
            int sum = stoi(str);
            // cout<<sum<<" ";
            ans += sum;
            return;
        }

        if(root->left != NULL){
            helper(root->left, str);
            str.pop_back();
        }
        if(root->right != NULL){
            helper(root->right, str);
            str.pop_back();
        }
    }
public:
    int sumNumbers(TreeNode* root) {
        string str = "";
        helper(root, str);

        return ans;
    }
};
