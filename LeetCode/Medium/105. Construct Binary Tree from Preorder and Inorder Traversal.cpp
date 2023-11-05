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
    int x = 0;
    TreeNode* rec(vector<int>& pre, vector<int>& in, int start, int end, unordered_map<int,int>& m)
    {
        if (start > end) return NULL;
        TreeNode* node = new TreeNode(pre[x]);
        int j = m[pre[x++]];
        if (start == end) return node;
        node->left = rec(pre, in, start, j - 1 , m);
        node->right = rec(pre, in, j+1, end, m);
        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> m;
        for (int i=0;i<inorder.size();i++)
            m[inorder[i]] = i;
        return rec(preorder, inorder, 0, preorder.size() - 1, m);
    }
};