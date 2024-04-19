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
    void dfs(TreeNode* root, string s, string& ans)
    {
        if(!root) return;
        s = (char)('a' + root->val) + s;
        if (!root->left && !root->right)
        {
            if (ans > s || !ans.size()) ans = s;
            return;
        }
        dfs(root->left, s,ans);
        dfs(root->right, s,ans);
    }

    string smallestFromLeaf(TreeNode* root) {
        string ans = "", s = "";
        s = (char)('a' + root->val) + s;
        dfs(root->left,s,ans);
        dfs(root->right,s,ans);
        return ans.size() ? ans : s; 
    }
};