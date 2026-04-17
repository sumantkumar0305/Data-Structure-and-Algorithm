// Leetcode
// 103. Binary Tree Zigzag Level Order Traversal -> Med

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode* >q;
        vector<vector<int>>v;
        if(root == NULL) return v;

        q.push(root);
        int count = 0;
        while(q.size() > 0){
            int n = q.size();
            vector<int>num;
            for(int i = 0; i < n; i++){
                TreeNode* temp = q.front();
                q.pop();
                num.push_back(temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            if(count%2 != 0){
                reverse(num.begin(), num.end());
                v.push_back(num);
            }else{
                v.push_back(num);
            }
            count++;
        }

        return v;
    }
};
