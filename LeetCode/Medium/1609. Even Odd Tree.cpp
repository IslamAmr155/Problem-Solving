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
    bool isEvenOddTree(TreeNode* root) {
        int d = 0, n = 1, x;
        queue<TreeNode*> q;
        q.push(root);
        while (n)
        {
            x = d % 2 == 0 ? INT_MIN : INT_MAX;
            while (n--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if (!temp) continue;
                if (d % 2 == 0)
                {
                    if (temp->val % 2 == 0 || temp->val <= x) return false;
                }
                else
                    if (temp->val % 2 != 0 || temp->val >= x) return false;
                x = temp->val;
                q.push(temp->left);
                q.push(temp->right);
            }   
            d++;
            n = q.size();
        }
        return true;
    }
};