// LeetCode
// 109. Convert Sorted List to Binary Search Tree -> Med

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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 
class Solution {
    TreeNode* build(vector<int>& vec, int low, int high) {
        if (low > high) return NULL;

        int mid = low + (high - low) / 2;

        TreeNode* root = new TreeNode(vec[mid]);
        root->left = build(vec, low, mid - 1);
        root->right = build(vec, mid + 1, high);

        return root;
    }

public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> vec;

        while (head != NULL) {
            vec.push_back(head->val);
            head = head->next;
        }

        return build(vec, 0, vec.size() - 1);
    }
};
