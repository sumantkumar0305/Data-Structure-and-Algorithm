#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Node{  //This is the Node class 
public:
    int data;
    Node* left;  //This ia the left pointer which store the address of left child of a tree
    Node* right;  //This is the right pointer which store the address of right child of tree

    Node(int data){  //THis a class constructor
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~Node(){  //This is a disructor
        delete left;
        delete right;
    }
};

Node* insert(Node* root, int val){  /*This function is used for the insert the value in the BST and take root of 
                                    given BST and  a vlaue which is entered in the tree as argument*/
    if(root == NULL) {    
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    }else if(val > root->data){
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int>& nodes){
    Node* root = NULL;

    for(auto it : nodes){
        root = insert(root, it);
    }

    return root;
}

void preorder(Node* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;

    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

Node* searchInBST(Node* root, int target){  
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        return root;
    }

    if(target < root->data){
        return searchInBST(root->left, target);
    }
    return searchInBST(root->right, target);
}

void range(Node* root, int st, int end, vector<int>&ans){
    if(root == NULL) return;

    if(root->data >= st && root->data <= end){
        ans.push_back(root->data);
        range(root->left, st, end, ans);
        range(root->right, st, end, ans);
    }else if(root->data < st){
        range(root->right, st, end, ans);
    }    else{
        range(root->left, st, end, ans);
    }
}

Node* sortedArrayToBST(vector<int>&num){
    int st = 0, end = num.size()-1;
    int mid = st + (end-st)/2;

    Node* root = new Node(num[mid]);
    for(int i = 0; i < num.size(); i++){
        if(i == mid){
            i++;
        }

        root = insert(root, num[i]);
    }

    return root;
}

Node* inorderSuccessor(Node* root){
    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node* root, int val){
    if(root == NULL){
        return NULL;
    }

    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }else if(val > root->data){
        root->right = deleteNode(root->right, val);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }
        
        
        Node* IS = inorderSuccessor(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right, IS->data);
    }

    return root;
}


int checkValidBST(Node* root){
    if(root->left == NULL && root->right == NULL) return root->data;

    int left = checkValidBST(root->left);
    int right = checkValidBST(root->right);

    if(left == -1 || right == -1){
        return false;
    }

    if(root->data > left && root->data < right){
        if(left < right){
            return right;
        }
    }

    return -1;
}

Node* mergeTwoBST(Node* root1, Node* root2){

}

int main(){
    vector<int>nodes = {5,3,6,1,4,7};
    Node* root = buildBST(nodes);

    cout<<checkValidBST(root)<<endl;

    return 0;
}