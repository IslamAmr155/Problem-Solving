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
    pair<TreeNode*, int> dfs(TreeNode* r, int d) {
        if (!r->left && !r->right) return {r, d};
        pair<TreeNode*, int> left, right;
        if (r->left) left = dfs(r->left, d+1);
        if (r->right) right = dfs(r->right, d+1);

        if (!r->left) return right;
        else if (!r->right) return left; 
        else if (left.second == right.second) return {r,left.second};
        else if (left.second > right.second) return left;
        else return right;
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root, 0).first;
    }
};