// Leetcode
// 1233. Remove Sub-Folders from the Filesystem -> Med.

class Node{
public:
    unordered_map<char, Node*>child;
    bool end;
    Node(){
        end = false;
    }
};

class Solution {
    bool insert(string str, Node* root){
        Node* temp = root;
        for(char ch : str) {
            if(temp->end && ch == '/')
                return true;

            if(temp->child.count(ch))
                temp = temp->child[ch];
            else {
                temp->child[ch] = new Node();
                temp = temp->child[ch];
            }
        }

        temp->end = true;

        return false;
    }
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        Node* root = new Node();
        vector<string>ans;
        
        for(auto it : folder){
            if(!insert(it, root)){
                ans.push_back(it);
            }
        }

        return ans;
    }
};
