// Leetcode
// 817. Linked List Components -> Med.

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
    int numComponents(ListNode* head, vector<int>& nums) {
        if(nums.size() == 1)return 1;
        unordered_set<int>un;

        for(auto it : nums){
            un.insert(it);
        }

        int ans = 0;
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            if(un.count(temp->val) !=0){
                count++;
            }else{
                if(count != 0) ans++;
                count = 0;
            }
            temp = temp->next;
        }
        if(count != 0) ans++;

        return ans;
    }
};
