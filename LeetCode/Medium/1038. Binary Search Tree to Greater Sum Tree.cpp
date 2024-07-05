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
    void rec(TreeNode* root,int& prev) {
        if (!root) return;
        rec(root->right,prev);
        root->val += prev;
        prev = root->val;
        rec(root->left,prev);
    }

    TreeNode* bstToGst(TreeNode* root) {
        int prev = 0;
        rec(root, prev);
        return root;
    }
};