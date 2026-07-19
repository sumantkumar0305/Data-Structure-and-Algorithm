// Leetcode
// 173. Binary Search Tree Iterator -> Med.

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
class BSTIterator {
    vector<int>vec;
    int idx = 0;
    void inorder(TreeNode* root, vector<int>&num){
        if(root == NULL)return;

        inorder(root->left, num);
        num.push_back(root->val);
        inorder(root->right, num);
    }
public:
    BSTIterator(TreeNode* root) {
        inorder(root, vec);
    }
    
    int next() {
        if(idx < vec.size()){
            int a = vec[idx];
            idx++;
            return a;
        }

        return -1;
    }
    
    bool hasNext() {
        return idx != vec.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
