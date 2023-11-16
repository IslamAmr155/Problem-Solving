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
    int m = 0, c = 0;

    int kthSmallest(TreeNode* root, int k) {
        if (!root) return m;
        kthSmallest(root->left, k);
        c++;
        if (k == c) return m = root->val;
        kthSmallest(root->right, k);
        return m;
    }
};