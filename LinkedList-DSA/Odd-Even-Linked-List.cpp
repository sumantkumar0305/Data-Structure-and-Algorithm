// Leetcode
// 328. Odd Even Linked List -> Med.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return head;
        ListNode* temp = head->next->next;
        ListNode* ans = new ListNode(head->val);
        ListNode* ans2 = ans;

        while(temp != NULL && temp->next != NULL){
            ListNode* newNode = new ListNode(temp->val);
            ans2->next = newNode;
            ans2 = ans2->next;
            temp = temp->next->next;
        }
        if(temp != NULL){
            ListNode* newNode = new ListNode(temp->val);
            ans2->next = newNode;
            ans2 = ans2->next;
        }

        temp = head->next;
        while(temp != NULL && temp->next != NULL){
            ListNode* newNode = new ListNode(temp->val);
            ans2->next = newNode;
            ans2 = ans2->next;
            temp = temp->next->next;
        }

        if(temp != NULL){
            ListNode* newNode = new ListNode(temp->val);
            ans2->next = newNode;
            ans2 = ans2->next;
        }

        return ans;
    }
};
