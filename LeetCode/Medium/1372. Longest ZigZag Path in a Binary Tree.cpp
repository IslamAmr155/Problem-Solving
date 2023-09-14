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
    void dfs(TreeNode* root,int& ma,bool direction,int sum)
    {
        if (!root)
        {
            ma = max(ma,sum);
            return;
        }
        sum++;
        if (direction)
        {
            dfs(root->left,ma,0,sum);
            dfs(root->right,ma,1,0);
        }
        else
        {
            dfs(root->right,ma,1,sum);
            dfs(root->left,ma,0,0);
        }
    }

    int longestZigZag(TreeNode* root) {
        int ma = INT_MIN;
        dfs(root->right,ma,1,0);
        dfs(root->left,ma,0,0);
        return ma;
    }
};