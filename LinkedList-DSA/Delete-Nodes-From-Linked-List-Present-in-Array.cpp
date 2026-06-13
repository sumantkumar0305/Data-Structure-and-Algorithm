// Leetcode
// 3217. Delete Nodes From Linked List Present in Array -> Med.

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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head == NULL) return NULL;
        unordered_set<int>un;
        for(auto it : nums){
            un.insert(it);
        }

        while(head != NULL && un.count(head->val) != 0){
            head = head->next;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL){
            if(un.count(curr->val)){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next;
            }else{
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};
