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
    void rec(TreeNode* root, vector<TreeNode*>& v) {
        if(!root) return;
        rec(root->left,v);
        v.push_back(root);
        rec(root->right,v);
    }

    TreeNode* build(vector<TreeNode*>& v,int s,int e) {
        if (s > e) return NULL;
        int mid = (s+e) / 2;
        TreeNode* root = v[mid];
        root->left = build(v,s,mid-1);
        root->right = build(v,mid+1,e);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> v;
        rec(root, v);
        return build(v,0,v.size() - 1);
    }
};