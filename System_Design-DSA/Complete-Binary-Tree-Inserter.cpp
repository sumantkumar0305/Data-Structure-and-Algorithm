// Leetcode
// 919. Complete Binary Tree Inserter -> Med.

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
class CBTInserter {
    TreeNode* root;
public:
    CBTInserter(TreeNode* root) {
        this->root = root;
    }
    
    int insert(int val) {
        queue<TreeNode*>q;
        q.push(root);

        while(q.size() > 0){
            int n = q.size();

            for(int i = 0; i < n; i++){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left == NULL){
                    temp->left = new TreeNode(val);
                    
                    return temp->val;
                }else{
                    q.push(temp->left);
                }
                
                 if(temp->right == NULL){
                    temp->right = new TreeNode(val);
                    return temp->val;
                }else{
                    q.push(temp->right);
                }

            }
        }

        return 0;
    }
    
    TreeNode* get_root() {
        return root;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
