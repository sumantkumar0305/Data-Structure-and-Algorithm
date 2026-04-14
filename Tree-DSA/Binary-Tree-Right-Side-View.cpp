// LeetCode
// 199. Binary Tree Right Side View -> Med

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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        vector<int>ans;
        queue<TreeNode* >q;
        q.push(root);

        while(q.size() > 0){
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* num = q.front();
                q.pop();

                if(i == size-1) ans.push_back(num->val);
                if(num->left != NULL) q.push(num->left);
                if(num->right != NULL)q.push(num->right);
            }
        }

        return ans;
    }
};
