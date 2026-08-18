// Leetcode
// 113. Path Sum II -> Med.

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
    vector<vector<int>>ans;
    void funct(TreeNode* root, int sum, vector<int>temp, int target){
        if(root == NULL) return;
        sum += root->val;
        temp.push_back(root->val);
        
        if (root->left == NULL && root->right == NULL) {
            if (sum == target) {
                ans.push_back(temp);
            }
        }

        funct(root->left, sum, temp, target);
        funct(root->right, sum, temp, target);
        // temp.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        funct(root, 0, temp, targetSum);

        return ans;
    }
};
