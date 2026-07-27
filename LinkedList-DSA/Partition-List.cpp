// Leetcode
// 86. Partition List -> Med.

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
    ListNode* partition(ListNode* head, int x) {
        vector<int>less, more;

        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                less.push_back(temp->val);
            }else{
                more.push_back(temp->val);
            }
            temp = temp->next;
        }

        temp = head;
        for(auto it : less){
            temp->val = it;
            temp = temp->next;
        }

        for(auto it : more){
            temp->val = it;
            temp = temp->next;
        }

        return head;
    }
};
