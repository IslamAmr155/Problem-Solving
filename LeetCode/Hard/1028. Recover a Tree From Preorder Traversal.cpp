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
    int findnum(string& t, int& i) {
        int n = 0;
        while (i < t.size() && t[i] != '-') n = n * 10 + (t[i] - '0'), i++;
        return n;
    }

    void dfs(TreeNode* root, string& t,int& d,int & i) {
        int depth = d, c = 0;
        while (t[i] == '-') c++, i++;
        if (c == depth + 1) {
            root->left = new TreeNode(findnum(t, i));
            d++;
            dfs(root->left, t, d, i);
        } else {
            d = c;
            return;
        }
        if (d == depth + 1 && i < t.size()) {
            root->right = new TreeNode(findnum(t, i));
            dfs(root->right, t, d, i);
        }
    }

    TreeNode* recoverFromPreorder(string traversal) {
        int d = 0, i = 0;
        TreeNode* root = new TreeNode(findnum(traversal, i));
        dfs(root, traversal, d, i);
        return root;    
    }
};