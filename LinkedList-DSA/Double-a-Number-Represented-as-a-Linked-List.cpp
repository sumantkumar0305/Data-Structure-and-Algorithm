// Leetcode
// 2816. Double a Number Represented as a Linked List -> Med.

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
    ListNode* doubleIt(ListNode* head) {
        vector<int>vec;

        ListNode* temp = head;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }

        reverse(vec.begin(), vec.end());
        int rem = 0;
        for(int i = 0; i < vec.size(); i++){
            int mul = vec[i]*2;
            mul += rem;
            rem = mul/10;
            vec[i] = mul%10; 
        }
        if(rem != 0)vec.push_back(rem);

        int end = vec.size()-1;
        ListNode* ans = new ListNode(vec[end]);
        temp = ans;
        end--;

        while(end >= 0){
            temp->next = new ListNode(vec[end]);
            temp = temp->next;
            end--;
        }

        return ans;
    }
};
