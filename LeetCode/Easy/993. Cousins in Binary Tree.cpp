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
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* p1 = NULL, *p2 = NULL;
        queue<TreeNode*> q;
        q.push(root);
        int n;
        while (!q.empty() && !p1 && !p2) {
            n = q.size();
            while (n--) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left) {
                    q.push(temp->left);
                    if (temp->left->val == x) p1 = temp;
                    if (temp->left->val == y) p2 = temp;
                }
                if (temp->right) {
                    q.push(temp->right);
                    if (temp->right->val == x) p1 = temp;
                    if (temp->right->val == y) p2 = temp;
                }
            } 
        }
        if ((p1 && !p2) || (!p1 && p2)) return false;
        return p1->val != p2->val;
    }
};