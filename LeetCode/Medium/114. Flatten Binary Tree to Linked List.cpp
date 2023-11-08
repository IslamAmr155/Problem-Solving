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
    void flatten(TreeNode* root) {
        if (!root) return;
        stack<TreeNode*> s;
        queue<TreeNode*> q;
        s.push(root);
        while (!s.empty())
        {
            TreeNode* temp = s.top();
            s.pop();
            q.push(temp);
            if (temp->right) s.push(temp->right);
            if (temp->left) s.push(temp->left);
        }
        TreeNode* temp = root;
        q.pop();
        while (!q.empty())
        {
            temp->right = q.front();
            temp->left = NULL;
            temp = q.front();
            q.pop();
        }
    }
};