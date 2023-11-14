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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> ans;
        deque<TreeNode*> q;
        q.push_front(root);
        int dir = -1, size = 1, i = 0;
        TreeNode* temp;
        while(!q.empty())
        {
            ans.push_back({});
            for (int j=0;j<size;j++)
            {
                if (dir == 1)
                {
                    temp = q.back();
                    q.pop_back();
                    if (temp->right) q.push_front(temp->right);
                    if (temp->left) q.push_front(temp->left);
                }
                else
                {
                    temp = q.front();
                    q.pop_front();
                    if (temp->left) q.push_back(temp->left);
                    if (temp->right) q.push_back(temp->right);
                }
                ans[i].push_back(temp->val);
            }
            i++, size = q.size(), dir *= -1;
        }
        return ans;
    }
};