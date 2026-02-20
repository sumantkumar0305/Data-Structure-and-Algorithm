//LeetCode
//144. Binary Tree Preorder Traversal

class Solution {
public:
    void preorderTemp(TreeNode* root, vector<int>&ans){
        if(root == NULL) return;

        ans.push_back(root->val);
        preorderTemp(root->left, ans);
        preorderTemp(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>ans;
    preorderTemp(root, ans);

    return ans;
    }
};
