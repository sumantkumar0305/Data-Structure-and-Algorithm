// Leetcode
// 1472. Design Browser History -> Med

class dNode {
public:
    string str;
    dNode* next;
    dNode* prev;

    dNode(string str) {
        this->str = str;
        next = NULL;
        prev = NULL;
    }
};

class BrowserHistory {
    dNode* curr;

public:
    BrowserHistory(string homepage) {

        curr = new dNode(homepage);
    }

    void visit(string url) {

        // Remove forward history
        curr->next = NULL;
        dNode* newNode = new dNode(url);
        curr->next = newNode;
        newNode->prev = curr;

        curr = newNode;
    }

    string back(int steps) {

        while(steps-- && curr->prev != NULL) {
            curr = curr->prev;
        }

        return curr->str;
    }

    string forward(int steps) {
        while(steps-- && curr->next != NULL) {
            curr = curr->next;
        }

        return curr->str;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
