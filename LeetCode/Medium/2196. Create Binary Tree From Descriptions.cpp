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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> m;
        unordered_map<TreeNode*,TreeNode*> c;
        TreeNode *root = NULL, *child = NULL;
        for (auto v : descriptions) {
            if (m.find(v[1]) != m.end()) child = m[v[1]];
            else child = m[v[1]] = new TreeNode(v[1]);
            if (m.find(v[0]) != m.end()) {
                if (v[2]) m[v[0]]->left = child;
                else m[v[0]]->right = child;
            }
            else {
                if (v[2]) m[v[0]] = new TreeNode(v[0],child,NULL);
                else m[v[0]] = new TreeNode(v[0],NULL,child);
            }
            c[child] = m[v[0]];
            while (c.find(child) != c.end()) child = c[child];
            root = child;
        }
        return root;
    }
};