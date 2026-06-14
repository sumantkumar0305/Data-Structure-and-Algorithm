// Leetcode
// 2130. Maximum Twin Sum of a Linked List -> Med.

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
    int pairSum(ListNode* head) {
        vector<int>num;

        ListNode* temp = head;
        while(temp != NULL){
            num.push_back(temp->val);
            temp = temp->next;
        }

        int st = 0, end = num.size()-1;
        int ans = INT_MIN;
        while(st < end){
            int sum = num[st]+num[end];
            ans = max(sum, ans);
            st++;
            end--;
        }

        return ans;
    }
};
