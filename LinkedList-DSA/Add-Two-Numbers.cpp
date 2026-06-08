// Leetcode
// 2. Add Two Numbers -> Med.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>first;
        while(l1 != NULL){
            first.push_back(l1->val);
            l1 = l1->next;
        }

        vector<int>sec;
        while(l2 != NULL){
            sec.push_back(l2->val);
            l2 = l2->next;
        }

        vector<int>ans;

        int i = 0;
        int carry = 0;
        while(i < first.size() && i < sec.size()){
            int sum = first[i]+sec[i]+carry;
            carry = sum/10;
            ans.push_back(sum%10);

            i++;
        }

        if(i < first.size()){
            for(int j = i; j < first.size(); j++){
                int sum = first[j]+carry;
                carry = sum/10;
                ans.push_back(sum%10);
            }
        }

        if(i < sec.size()){
            for(int j = i; j < sec.size(); j++){
                int sum = sec[j]+carry;
                carry = sum/10;
                ans.push_back(sum%10);
            }
        }

        if(carry != 0){
            ans.push_back(carry);
        }

        ListNode* a = new ListNode(ans[0]);
        ListNode* temp = a;

        for(int j = 1; j < ans.size(); j++){
            temp->next = new ListNode(ans[j]);

            temp = temp->next;
        }

        return a;
    }
};
