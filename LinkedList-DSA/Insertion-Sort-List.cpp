// Leetcode
// 147. Insertion Sort List -> Med.

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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>vec;
        ListNode* temp = head;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 0; i < vec.size(); i++){
            int val = vec[i];
            int prev = i-1;
            while(prev >= 0 && vec[prev] > val){
                swap(vec[prev], vec[prev+1]);
                prev--;
            }
            vec[prev+1] = val;
        }

        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = vec[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};
