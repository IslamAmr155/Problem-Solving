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

    int dfs(TreeNode* root)
    {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        int sum1 = root->val, sum2 = root->val;
        if (left > 0 || right > 0)
        {
            if (left > right) sum1 += left;
            else sum1 += right;
        }
        if (left > 0) sum2 += left;
        if (right > 0) sum2 += right;
        ans = max(ans,max(sum1,sum2));
        return sum1;
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};