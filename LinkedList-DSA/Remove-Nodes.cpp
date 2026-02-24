//LeetCode
//2487. Remove Nodes From Linked List -> Med

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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* curr = NULL;

        while(temp != NULL){
            curr = temp->next;

            temp->next = prev;
            prev = temp;
            temp = curr;
        }

        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
       head = reverseList(head);

        int maxVal = INT_MIN;
        ListNode* curr = head;
        ListNode* prev = NULL;

        // Step 2: Remove nodes smaller than max so far
        while (curr) {
            if (curr->val >= maxVal) {
                maxVal = curr->val;
                prev = curr;
                curr = curr->next;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
        }

        // Step 3: Reverse again
        return reverseList(head);
    }
};
