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
    int ans = INT_MIN;

    int dfs(TreeNode* root, int d)
    {
        if (!root) return 0;
        if (!root->left && !root->right) return d;
        int l = dfs(root->left,d+1);
        int r = dfs(root->right,d+1);
        ans = max(ans,l+r-2*d);
        return max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root,0);
        return ans == INT_MIN ? 0 : ans;
    }
};