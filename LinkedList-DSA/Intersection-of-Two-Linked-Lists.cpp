// Leetcode
// 160. Intersection of Two Linked Lists -> Easy

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA = 0, sizeB = 0;
        ListNode* tempA = headA, *tempB = headB;

        while(tempA != NULL){
            sizeA++;
            tempA = tempA->next;
        }

        while(tempB != NULL){
            sizeB++;
            tempB = tempB->next;
        }

        if(sizeA > sizeB){
            int diff = sizeA-sizeB;
            tempA = headA;
            tempB = headB;
            int k = 0;
            while(k < diff){
                tempA = tempA->next;
                k++;
            }
            while(tempB != NULL && tempA != NULL){
                if(tempB == tempA) return tempA;
                tempB = tempB->next;
                tempA = tempA->next;
            }
        }else{
            int diff = sizeB-sizeA;
            tempA = headA;
            tempB = headB;
            int k = 0;
            while(k < diff){
                tempB = tempB->next;
                k++;
            }
            while(tempB != NULL && tempA != NULL){
                if(tempB == tempA) return tempA;
                tempB = tempB->next;
                tempA = tempA->next;
            }
        }

        return NULL;
    }
};
