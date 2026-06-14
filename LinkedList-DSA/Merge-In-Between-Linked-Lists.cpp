// Leetcode
// 1669. Merge In Between Linked Lists -> Med.


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
    ListNode* find(ListNode* head, int val){
        ListNode* temp = head;
        int i = 0;

        while(temp != NULL && i < val){
            temp = temp->next;
            i++;
        }

        return temp;
    }
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* left = find(list1, a-1);
        ListNode* right = find(list1, b);

        left->next = list2;
        ListNode* temp = list2;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = right->next;
        right->next = NULL;

        return list1;
    }
};
