

bool searchingElement(Node* root, int val){  // Recursive approach
    if(root == NULL) return false;

    if (root->data == val) return true;

    return searchingElement(root->left, val) || searchingElement(root->right, val);
}


bool searchingElementIterative(Node* root, int val){ // Iterative Approach
    stack<Node*>s;

    while(1){
        while(root){
            if(val == root->data) return true;

            s.push(root);
            root = root->left;
        }

        if(s.empty()) break;
        root = s.top();
        s.pop();
        root = root->right;
    }

    return false;
}
