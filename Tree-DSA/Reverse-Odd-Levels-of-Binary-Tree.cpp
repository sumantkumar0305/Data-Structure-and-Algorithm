// Leetcode
// 2415. Reverse Odd Levels of Binary Tree -> Med.

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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int i = 0;
        queue<TreeNode* >q;
        q.push(root);

        while(q.size() > 0){
            int n = q.size();

            if(i%2 == 0){
                for(int j = 0; j < n; j++){
                    TreeNode* temp = q.front();
                    q.pop();

                    if(temp->left != NULL){
                        q.push(temp->left);
                    }
                    if(temp->right != NULL){
                        q.push(temp->right);
                    }
                }
            }else{
                vector<TreeNode*>vec;
                vector<int>num;
                for(int j = 0; j < n; j++){
                    TreeNode* temp = q.front();
                    q.pop();
                    vec.push_back(temp);
                    num.push_back(temp->val);

                    if(temp->left != NULL){
                        q.push(temp->left);
                    }
                    if(temp->right != NULL){
                        q.push(temp->right);
                    }
                }
                reverse(num.begin(), num.end());
                for(int j = 0; j < vec.size(); j++){
                    vec[j]->val = num[j];
                }
            }
            i++;
        }

        return root;
    }
};
