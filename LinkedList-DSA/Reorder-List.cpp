// Leetcode
// 143. Reorder List -> Med.

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
    void reorderList(ListNode* head) {
        vector<int>vec;
        ListNode* temp = head;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int st = 0, end = vec.size()-1;
        temp = head;
        while(st <= end && temp != NULL){
            temp->val = vec[st];
            temp = temp->next;
            st++;
            if(st > end) break;
            temp->val = vec[end];
            end--;
            temp = temp->next;
        }
    }
};
