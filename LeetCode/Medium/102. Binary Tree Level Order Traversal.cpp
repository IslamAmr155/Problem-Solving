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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {}; 
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int c = 1, size = 1, i = 0;
        while(!q.empty())
        {
            ans.push_back({});
            size = c, c = 0;
            for (int j=0;j<size;j++)
            {
                TreeNode* temp = q.front();
                q.pop();
                ans[i].push_back(temp->val);
                if (temp->left)
                {
                    q.push(temp->left);
                    c++;
                }
                if (temp->right)
                {
                    q.push(temp->right);
                    c++;
                }
            }
            i++;
        }
        return ans;
    }
};