// Leetcode
// 208. Implement Trie (Prefix Tree) -> Med.

class Node{
public:
    bool end;
    unordered_map<char, Node*>child;
    Node(){
        end = false;
    }
};

class Trie {
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* temp = root;
        for(auto it : word){
            if(temp->child.count(it) == 0){
                temp->child[it] = new Node();
            }

            temp = temp->child[it];
        }
        temp->end = true;
    }
    
    bool search(string word) {
        Node* temp = root;
        for(auto it : word){
            if(temp->child.count(it) == 0) return false;
            temp = temp->child[it];
        }

        return temp->end;
    }
    
    bool startsWith(string prefix) {
        Node* temp = root;
        for(auto it : prefix){
            if(temp->child.count(it) == 0) return false;
            temp = temp->child[it];
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
