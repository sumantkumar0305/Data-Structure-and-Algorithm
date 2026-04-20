// LeetCode
// 637. Average of Levels in Binary Tree -> Easy

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);

        while(q.size() > 0){
            int n = q.size();
            double temp = 0;
            for(int i = 0; i < n; i++){
                TreeNode* fr = q.front();
                q.pop();
                temp += fr->val;
                if(fr->left != NULL) q.push(fr->left);
                if(fr->right != NULL) q.push(fr->right);
            }
            temp /= n;
            ans.push_back(temp);
        }

        return ans;
    }
};
