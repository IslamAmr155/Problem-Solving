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
    vector<int> ans;
    int mode = INT_MIN, c = 1, prev = INT_MIN;

    void inorder(TreeNode* root)
    {
        if (!root) return;
        inorder(root->left);        
        if (root->val != prev)
        {
            if (c > mode)
            {
                ans.clear();
                ans.push_back(prev);
                mode = c;
            }
            else if (c == mode)
                ans.push_back(prev);
            c = 1;
            prev = root->val;
        }
        c++;
        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        if (c > mode)
        {
            ans.clear();
            ans.push_back(prev);
            mode = c;
        }
        else if (c == mode)
            ans.push_back(prev);
        return ans;
    }
};