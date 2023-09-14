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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> cur,next;
        vector<int> ans;
        if (!root)
            return ans;
        cur.push(root);
        TreeNode* temp;
        while (!cur.empty())
        {
            temp = cur.front();
            cur.pop();
            if (temp->left) next.push(temp->left);
            if (temp->right) next.push(temp->right);
            if (cur.empty())
            {
                ans.push_back(temp->val);
                cur.swap(next);
            }
        }
        return ans;
    }
};