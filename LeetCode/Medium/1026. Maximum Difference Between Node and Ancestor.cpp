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
    void dfs (TreeNode* root, int& m, int n, int k)
    {
        if(!root) return;
        n = max(root->val,n);
        k = min(root->val,k);
        m = max(max(m,abs(n-root->val)),abs(k-root->val));
        dfs(root->left, m, n, k);
        dfs(root->right, m, n, k);
    }

    int maxAncestorDiff(TreeNode* root) {
        int m = INT_MIN;
        dfs(root, m, 0, 5001);
        return m;
    }
};