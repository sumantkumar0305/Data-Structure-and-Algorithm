// Leetcode
// 82. Remove Duplicates from Sorted List II -> Med.

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        map<int, int>un;
        ListNode* temp = head;
        while(temp != NULL){
            un[temp->val]++;
            temp = temp->next;
        }

        temp = head;
        ListNode* prev = NULL;
        for(auto it : un){
            if(it.second == 1){
                prev = temp;
                temp->val = it.first;
                temp = temp->next;
            }
        }
        if(prev == NULL) return NULL;
        prev->next = NULL;

        return head;
    }
};
