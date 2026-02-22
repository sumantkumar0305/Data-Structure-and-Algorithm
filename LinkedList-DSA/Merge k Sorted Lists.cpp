//Leetcode
//23. Merge k Sorted Lists -> Hard

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0 ) return NULL;
        vector<int> vec;

        for(auto it : lists){
            while(it != NULL){
                vec.push_back(it->val);
                it = it->next;
            }
        }

        if(vec.size() == 0) return NULL;

        sort(vec.begin(), vec.end());

        ListNode* ans = new ListNode(vec[0]);
        ListNode* temp = ans;

        for(int i = 1; i < vec.size(); i++){
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }

        return ans;
    }
};
