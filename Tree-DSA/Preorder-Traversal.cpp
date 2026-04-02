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
    void preOrders(Node* root, vector<int>&ans){ //Recursive Code
        if(root == NULL) return;
        
        ans.push_back(root->data);
        preOrders(root->left, ans);
        preOrders(root->right, ans);
    }

    void preOrderIterative(Node* root){  //Iterative Code
        stack<Node*>s;
        while(true){
            while(root){
                cout<<root->data<<" ";
    
                s.push(root);
                root = root->left;
            }
    
            if(s.empty()){
                break;
            }
            root = s.top();
            s.pop();
            root = root->right;
        }
    }
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        
        preOrders(root, ans);
        
        return ans;
    }
};
