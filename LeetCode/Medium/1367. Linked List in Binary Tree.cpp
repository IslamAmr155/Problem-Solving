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
public:
    bool dfs(ListNode* head, TreeNode* root, ListNode* cur) {
        if (!cur) return true;
        if (!root) return false;
        if (cur->val == root->val) cur = cur->next;
        else return false;
        return dfs(head, root->left, cur) || dfs(head, root->right, cur);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root) return false;
        ListNode* cur = head;
        return dfs(head, root, cur) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};