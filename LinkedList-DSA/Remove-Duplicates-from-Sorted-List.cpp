// Leetcode
// 83. Remove Duplicates from Sorted List -> Easy

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
        unordered_set<int>un;
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            if(un.count(temp->val) == 0){
                prev = temp;
                un.insert(temp->val);
                temp = temp->next;
            }else{
                prev->next = temp->next;
                temp->next = NULL;
                temp = prev->next;
            }
        }

        return head;
    }
};
