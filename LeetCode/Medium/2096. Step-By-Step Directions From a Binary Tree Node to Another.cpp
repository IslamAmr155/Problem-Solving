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
    bool find(TreeNode* root, string& p, int& k) {
        if (!root) return false;
        if (root->val == k) return true;
        if (root->left && find(root->left,p,k)) {
            p.push_back('L');
            return true;
        }
        if (root->right && find(root->right,p,k)) {
            p.push_back('R');
            return true;
        }
        return false;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string s = "", d = "";
        find(root,s,startValue);
        find(root,d,destValue);
        while (!s.empty() && !d.empty() && s.back() == d.back()) {
            s.pop_back();
            d.pop_back();
        }
        return string(s.size(), 'U') + string(rbegin(d), rend(d));
    }
};