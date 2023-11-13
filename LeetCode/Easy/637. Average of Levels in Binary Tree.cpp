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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        int c = 0, size = 1;
        long long sum = 0;
        while(!q.empty())
        {
            for (int j=0;j<size;j++)
            {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
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
            ans.push_back(sum*1.0/size);
            size = c;
            c = 0, sum = 0;
        }
        return ans;
    }
};