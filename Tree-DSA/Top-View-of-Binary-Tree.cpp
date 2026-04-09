// GFG
// Top View of Binary Tree -> Med


/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        if (root == NULL) return{};

        queue<pair<Node*, int>> q;
        map<int, int> un;   // use map for sorted order
    
        q.push({root, 0});
    
        while (!q.empty()) {
            pair<Node*, int> p = q.front();
            q.pop();   
            if(un.count(p.second) == 0){
                un[p.second] = p.first->data;
            }
        
            if (p.first->left != NULL) {
                q.push({p.first->left, p.second - 1});
            }
    
            if (p.first->right != NULL) {
                q.push({p.first->right, p.second + 1});
            }
        }
    
        vector<int>ans;
        for (auto it : un) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
