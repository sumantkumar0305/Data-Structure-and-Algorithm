#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    unordered_map<char, Node*>children;
    bool endOfWord;
    Node(){
        endOfWord = false;
    }
};

class Tries{
    Node* root;
public:
    Tries(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;

        for(int i = 0; i < key.length(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    bool search(string key){
        Node* temp = root;
        for(auto it : key){
            if(temp->children.count(it) == 0) return false;
            temp = temp->children[it];
        }

        return temp->endOfWord;
    }
};

int main(){
    Tries t;

    t.insert("apple");
    t.insert("app");
    t.insert("ball");

    cout<<t.search("ball");

    return 0;
}
