// Leetcode
// 24. Swap Nodes in Pairs -> Med.

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* ne = NULL;
        ListNode* prev = NULL;
        ListNode* ans = NULL;

        while(temp != NULL && temp->next != NULL){
            ne = temp->next;
            if(ans == NULL) ans = ne;
            temp->next = ne->next;
            ne->next = temp;
            if(prev != NULL){
                prev->next = ne;
            }
            prev = temp;
            temp = temp->next;
        }

        return ans;
    }
};
