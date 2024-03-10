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
    int md = INT_MIN;

    void dfs (TreeNode* root, int d,int& ans)
    {
        if (!root) return;
        if (!root->left && !root->right)
            if (d > md) 
            {
                md = d;
                ans = root->val;
                return;
            }
        dfs(root->left,d+1,ans);
        dfs(root->right,d+1,ans);
    }

    int findBottomLeftValue(TreeNode* root) {
        int ans = root->val;
        dfs(root,0,ans);
        return ans;
    }
};