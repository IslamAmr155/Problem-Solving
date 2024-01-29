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
    int c = 0;
    vector<int> v = vector<int>(10);
    
    void dfs (TreeNode* root)
    {
        if (!root) return;
        v[root->val]++;
        if (!root->left && !root->right)
        {
            int odd = 0;
            for (int i : v)
                if (i % 2 == 1)
                    odd++;
            if (odd <= 1)
                c++;
        }
        else
        {
            dfs(root->left);
            dfs(root->right);
        }
        v[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return c;
    }
};