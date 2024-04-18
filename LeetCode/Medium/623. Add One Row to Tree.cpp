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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1)
        {
            TreeNode* x = new TreeNode(val);
            x->left = root;
            return x;
        }
        queue<TreeNode*> q;
        q.push(root);
        int n = q.size(), d = 1;
        while (d + 1 != depth)
        {
            n = q.size();
            while (n--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            d++;
        }
        while (q.size())
        {
            TreeNode* temp1 = new TreeNode(val);
            TreeNode* temp2 = new TreeNode(val);
            TreeNode* org = q.front();
            q.pop();
            temp1->left = org->left;
            org->left = temp1;
            temp2->right = org->right;
            org->right = temp2;
        }
        return root;
    }
};