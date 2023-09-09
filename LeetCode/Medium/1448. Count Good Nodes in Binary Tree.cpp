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
    void dfs(TreeNode* root,int& c,int ma)
    {
        if (root == NULL)
            return;
        if (root->val >= ma)
        {
            ma = root->val;
            c++;
        }
        dfs(root->left,c,ma);
        dfs(root->right,c,ma);
    }

    int goodNodes(TreeNode* root) {
        int c  = 0;
        int ma = root->val;
        dfs(root,c,ma);
        return c;     
    }
};