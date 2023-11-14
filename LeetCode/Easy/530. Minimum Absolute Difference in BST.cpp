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
    int m = INT_MAX, prev = 10e8;

    int getMinimumDifference(TreeNode* root) {
        if(!root) return m;
        getMinimumDifference(root->left);
        m = min(m, abs(root->val-prev));
        prev = root->val;
        getMinimumDifference(root->right);
        return m;
    }
};