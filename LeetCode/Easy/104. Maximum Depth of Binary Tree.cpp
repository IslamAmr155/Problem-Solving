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
    int ma = INT_MIN;
    
    void dfs(TreeNode* root,int d)
    {
        if (root == nullptr)
        {
            ma = max(ma,d);
            return;
        }
        dfs(root->left,d+1);
        dfs(root->right,d+1);
    }

    int maxDepth(TreeNode* root) {
        dfs(root,0);
        return ma;
    }
};