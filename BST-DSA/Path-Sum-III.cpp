// Leetcode
// 437. Path Sum III -> Med.

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
    void funct(TreeNode* root, long long sum, int target){
        if(root == NULL) return;
        sum += root->val;
        if (sum == target) {
            ans++;
        }

        funct(root->left, sum, target);
        funct(root->right, sum, target);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        queue<TreeNode* >q;

        q.push(root);

        while(q.size() > 0){
            TreeNode* front = q.front();
            q.pop();
            funct(front, 0, targetSum);

            if(front->left != NULL){
                q.push(front->left);
            }

            if(front->right != NULL){
                q.push(front->right);
            }
        }

        return ans;
    }
};
