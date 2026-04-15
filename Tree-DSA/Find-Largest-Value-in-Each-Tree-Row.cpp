// Leetcode
// 515. Find Largest Value in Each Tree Row -> Med

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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);

        while(q.size() > 0){
            int max_val = INT_MIN;
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                q.pop();

                max_val = max(max_val, curr->val);
                if(curr->left != NULL){
                    q.push(curr->left);
                }

                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            ans.push_back(max_val);
        }
        return ans;
    }
};
