/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,stack<TreeNode*>& s,TreeNode* &p,bool& flag)
    {
        if (!root || flag)
            return;
        s.push(root);
        if (root->val == p->val)
        {
            flag = 1;
            return;
        }
        dfs(root->right,s,p,flag);
        dfs(root->left,s,p,flag);
        if (!flag)
            s.pop();
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack<TreeNode*> sp,sq;
        bool flag = 0;
        dfs(root,sp,p,flag);
        flag = 0;
        dfs(root,sq,q,flag);
        while (sp.size() > sq.size())
            sp.pop();
        while (sq.size() > sp.size())
            sq.pop();
        while (!sp.empty())
        {
            if (sp.top()->val == sq.top()->val)
                return sp.top();
            sp.pop();
            sq.pop();
        }
        return root;
    }
};