// Leetcode
// 1721. Swapping Nodes in a Linked List -> Med.

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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>num;
        ListNode* temp = head;

        while(temp != NULL){
            num.push_back(temp->val);
            temp = temp->next;
        }

        int st = k-1;
        int end = num.size()-k;

        temp = head;
        int i = 0;
        while(temp != NULL){
            if(i == st){
                temp->val = num[end];
            }

            if(i == end){
                temp->val = num[st];
                // break;
            }
            i++;
            temp = temp->next;
        }        

        return head;
    }
};
