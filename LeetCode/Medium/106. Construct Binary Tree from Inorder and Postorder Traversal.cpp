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
    TreeNode* rec(vector<int>& post, vector<int>& in, int start, int end, int& x, unordered_map<int,int>& m)
    {
        if (start > end) return NULL;
        TreeNode* node = new TreeNode(post[x]);
        int j = m[post[x--]];
        if (start == end) return node;
        node->right = rec(post, in, j+1, end, x, m);
        node->left = rec(post, in, start, j-1, x, m);
        return node;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> m;
        for (int i=0;i<inorder.size();i++)
            m[inorder[i]] = i;
        int x = inorder.size() - 1;
        return rec(postorder, inorder, 0, postorder.size() - 1, x, m);
    }
};