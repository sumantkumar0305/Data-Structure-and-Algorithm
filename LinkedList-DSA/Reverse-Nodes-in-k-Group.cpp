// leetcode
// 25. Reverse Nodes in k-Group -> Hard

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
    ListNode* reverse(ListNode* temp){
        ListNode* curr = temp;
        ListNode* prev = NULL;
        ListNode* ne = NULL;

        while(curr != NULL){
            ne = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ne;
        }

        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* ans = NULL;

        while(temp != NULL){
            int count = 0;
            ListNode* temp2 = temp;
            ListNode* prev = NULL;
            while(count < k && temp2 != NULL){
                prev = temp2;
                temp2 = temp2->next;
                count++;
            }

            if(count < k){
                if(ans == NULL){
                    ans = temp;
                }else{
                    ListNode* t = ans;
                    while(t->next != NULL){
                        t = t->next;
                    }
                    t->next = temp;
                }
                break;
            }

            prev->next = NULL;
            if(ans == NULL){
                ans = reverse(temp);
            }else{
                ListNode* t = ans;
                while(t->next != NULL){
                    t = t->next;
                }
                t->next = reverse(temp);
            }
            temp = temp2;
        }

        return ans;
    }
};
