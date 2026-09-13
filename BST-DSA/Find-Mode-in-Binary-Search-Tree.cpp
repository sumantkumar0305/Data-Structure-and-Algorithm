// Leetcode
// 501. Find Mode in Binary Search Tree -> Easy

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
    unordered_map<int, int>un;
    void ino(TreeNode* root){
        if(root == NULL)return;
        un[root->val]++;
        ino(root->left);
        ino(root->right);
    }

public:
    vector<int> findMode(TreeNode* root) {
        ino(root);
        if(un.size() == 1)return {un.begin()->first};
        map<int, vector<int>>vec;
        for(auto it : un){
            vec[it.second].push_back(it.first);
        }

        auto it = vec.end();
        --it;
        return it->second;    
    }
};
