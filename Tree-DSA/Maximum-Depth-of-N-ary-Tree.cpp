// Leetcode
// 559. Maximum Depth of N-ary Tree -> Easy

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
public:
    int maxDepth(Node* root) {
        int ans = 0;
        if(root == NULL) return 0;
        queue<Node*>q;

        q.push(root);
        while(q.size() > 0){
            ans++;
            int n = q.size();

            for(int i = 0; i < n; i++){
                Node* u = q.front();
                q.pop();
                for(auto it : u->children){
                    q.push(it);
                }
            }
        }

        return ans;
    }
};
