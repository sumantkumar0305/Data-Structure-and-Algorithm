// LeetCode
// 117. Populating Next Right Pointers in Each Node II -> Med


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;

        queue<Node* > q;
        q.push(root);
        q.push(NULL);
        
        while(q.size() > 0){
            Node* fr = q.front();
            q.pop();

            if(fr != NULL){
                fr->next = q.front();

                if(fr->left != NULL){
                    q.push(fr->left);
                }
                if(fr->right != NULL){
                    q.push(fr->right);
                }
            }else{
                if(!q.empty()){
                    q.push(NULL);
                }
            }
        }
        return root;
    }
};
