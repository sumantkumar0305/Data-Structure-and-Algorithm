// GFG
// Preorder Traversal -> Easy

/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
    void preOrders(Node* root, vector<int>&ans){
        if(root == NULL) return;
        
        ans.push_back(root->data);
        preOrders(root->left, ans);
        preOrders(root->right, ans);
    }
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        
        preOrders(root, ans);
        
        return ans;
    }
};
