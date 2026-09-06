// Leetcode
// 404. Sum of Left Leaves -> Easy

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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;

        queue<TreeNode* >q;
        q.push(root);

        while(q.size() > 0){
            int n = q.size();

            for(int i = 0; i < n; i++){
                TreeNode* fr = q.front();
                q.pop();

                if(fr->left != NULL){
                    if(fr->left->left == NULL && fr->left->right == NULL) ans += fr->left->val;
                    q.push(fr->left);
                }

                if(fr->right != NULL){
                    q.push(fr->right);
                }
            }
        }

        return ans;
    }
};
