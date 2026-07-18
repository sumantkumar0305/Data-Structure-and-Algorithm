// Leetcode
// 589. N-ary Tree Preorder Traversal -> Easy

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    void helper(vector<int>&vec, Node* root){
        if(root == NULL) return;

        vec.push_back(root->val);
        for(auto it : root->children){
            helper(vec, it);
        }
    }
public:
    vector<int> preorder(Node* root) {
        vector<int>vec;
        helper(vec, root);

        return vec;
    }
};
