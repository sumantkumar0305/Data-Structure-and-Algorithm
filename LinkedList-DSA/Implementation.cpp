class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class ll {
public:
    Node* head;
    ll() {
        head = NULL;
    }

    void pushBack(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteBack(){
        if(head == NULL){
            cout<<"Delete is not possible";
            return;
        }
        if(head->next == NULL){
           head = NULL;
           delete head;
           return;
        }

        Node* temp = head;

        while (temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL;
    }
};