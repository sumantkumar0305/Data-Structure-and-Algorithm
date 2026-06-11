// Leetcode
// 19. Remove Nth Node From End of List -> Med.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0; 
        ListNode* temp = head;

        while(temp != NULL){
            temp = temp->next;
            size++;
        }

        int de = size-n;
        if(de == 0){
            return head->next;
        }
        int k = 0;
        temp = head;
        ListNode* prev = NULL;

        while(k < de){
            k++;
            prev = temp;
            temp = temp->next;
        }

        if(prev == NULL) return NULL;

        prev->next = temp->next;
        temp->next = NULL;

        return head;
    }
};
