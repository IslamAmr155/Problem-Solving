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
    long prev = LONG_MIN;
    bool flag = true;

    bool isValidBST(TreeNode* root) {
        if (!root) return flag;
        isValidBST(root->left);
        if (prev >= root->val)
            return flag = false;
        prev = root->val;
        isValidBST(root->right);
        return flag;
    }
};