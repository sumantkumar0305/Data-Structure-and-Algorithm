#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Tree class
class BinaryTree {
public:
    Node* root;

    // Constructor
    BinaryTree() {
        root = nullptr;
    }

    // Insert function (simple BST insert)
    void insert(int value) {
        root = insertRec(root, value);
    }

private:
    // Helper recursive insert
    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }
        return node;
    }
};

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int height(Node* root){
    if(root == NULL) return -1;

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right)+1;
}

vector<int> topView(Node* root){
    queue<pair<Node*, int>>q;
    unordered_map<int, int>un;
    q.push(make_pair(root, 0));

    while(q.size() > 0){
        pair<Node* ,int>p = q.front();
        q.pop();

        if(un.count(p.second) == 0){
            un[p.second] = p.first->data;
        }

        if(p.first->left != NULL) {
            q.push(make_pair(p.first->left, p.second+1));
        }

        if(p.first->right != NULL) {
            q.push(make_pair(p.first->right, p.second+1));
        }
    }

    vector<int>ans;

    for(auto& pair: un){
        ans.push_back(pair.second);
    }

    return ans;
}

int main() {
    BinaryTree tree;

    // Insert nodes
    tree.insert(10);
    tree.insert(5);
    tree.insert(20);
    tree.insert(3);
    tree.insert(7);

    cout << "Inorder Traversal: ";
    cout<<height(tree.root);
    cout << endl;

    return 0;
}
