// GFG
// Bottom View of Binary Tree -> Med

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        if (root == NULL) return{};

        queue<pair<Node*, int>> q;
        map<int, int> mp;   // use map for sorted order
    
        q.push({root, 0});
    
        while (!q.empty()) {
            pair<Node*, int> p = q.front();
            q.pop();   // ✅ important
    
            mp[p.second] = p.first->data;
        
            if (p.first->left != NULL) {
                q.push({p.first->left, p.second - 1});
            }
    
            if (p.first->right != NULL) {
                q.push({p.first->right, p.second + 1});
            }
        }
    
        vector<int>ans;
        for (auto it : mp) {
            // cout << it.second << " ";
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
