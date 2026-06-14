// Leetcode
// 92. Reverse Linked List II -> Med.

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
        int i = 1;

        while(temp != NULL && i < val){
            temp = temp->next;
            i++;
        }

        return temp;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* leftVal = find(head, left);
        ListNode* rightVal = find(head, right);

        if(leftVal == NULL || rightVal == NULL) return head;

        vector<int>vec;
        ListNode* temp = leftVal;
        while(temp != rightVal){
            vec.push_back(temp->val);

            temp = temp->next;
        }

        vec.push_back(temp->val);

        reverse(vec.begin(), vec.end());
        int i = 0;
        while(leftVal != rightVal && i < vec.size()){
            leftVal->val = vec[i];
            i++;
            leftVal = leftVal->next;
        }

        for(auto it : vec){
            cout<<it<<" ";
        }
        cout<<endl;

        leftVal->val = vec[i];

        return head;
    }
};
