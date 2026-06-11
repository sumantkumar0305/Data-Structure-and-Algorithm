// Leetcode
// 14. Longest Common Prefix -> Easy

class Node{
public:
    unordered_map<char, Node*>un;
    bool endOfWord;
    Node(){
        endOfWord = false;
    }
};

Node* root;

void insert(string str){
    Node* temp = root;

    for(auto it : str){
        if(temp->un.count(it) == 0){
            temp->un[it] = new Node();
        }

        temp = temp->un[it];
    }

    temp->endOfWord = true;
}

int ans;
void search(string str){
    Node* temp = root;

    int t = 0;
    for(auto it : str){
        if(temp->un.count(it)){
            t++;
            temp = temp->un[it];
        }else break;
    }

    ans = min(ans, t);
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        root = new Node();
        ans = 201;
        insert(strs[0]);

        for(auto it : strs){
            search(it);
        }

        string a = "";
        for(int i = 0; i < ans; i++){
            a += strs[0][i];
        }

        return a;
    }
};
