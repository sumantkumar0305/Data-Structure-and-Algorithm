//Leetcode
//25. Reverse Nodes in k-Group -> Hard

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = 0;

    ListNode* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    temp = head;

    ListNode* li = head;
    
    while(len >= k){
        temp = li;
        vector<int>vec;
        
        for(int i = 1; i <= k; i++){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        reverse(vec.begin(), vec.end());

        temp = li;

        for(int i = 0; i < k; i++){
            temp->val = vec[i];
            temp = temp->next;
        }

        len -= k;
        li = temp;
    }
    return head;
    }
};
