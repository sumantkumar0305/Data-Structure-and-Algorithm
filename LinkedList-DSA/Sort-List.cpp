// Leetcode
// 148. Sort List -> Med.

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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int>vec;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        sort(vec.begin(), vec.end());
        temp = head;
        for(auto it : vec){
            temp->val = it;
            temp = temp->next;
        }

        return head;
    }
};
