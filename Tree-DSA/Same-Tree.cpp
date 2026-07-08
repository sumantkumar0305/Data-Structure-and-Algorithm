// Leetcode
// 100. Same Tree

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
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>one, two;
        one.push(p);
        two.push(q);

        while(one.size() > 0 && two.size() > 0){
            TreeNode* fir = one.front(); one.pop();
            TreeNode* sec = two.front(); two.pop();

            if (fir == nullptr && sec == nullptr)
                continue;

            if (fir == nullptr || sec == nullptr)
                return false;

            if (fir->val != sec->val)
                return false;

            one.push(fir->left);
            one.push(fir->right);

            two.push(sec->left);
            two.push(sec->right);
        }
        if(one.size() > 0 || two.size() > 0) return false;

        return true;
    }
};
