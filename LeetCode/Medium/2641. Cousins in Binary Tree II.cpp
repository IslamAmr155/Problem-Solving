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
    TreeNode* replaceValueInTree(TreeNode* root) {
        unordered_map<TreeNode*, int> p;
        queue<pair<TreeNode*, TreeNode*>> q, r;
        TreeNode* temp, *pre = new TreeNode(0, root, NULL);
        p[pre] = root->val;
        q.push({root, pre});
        int n, sum, sump;
        while (!q.empty()) {
            n = q.size();
            sum = 0;
            while (n--) {
                sump = 0;
                temp = q.front().first, pre = q.front().second;
                r.push({temp, pre});
                q.pop();
                sum += temp->val;
                if (temp->left) {
                    q.push({temp->left, temp});
                    sump += temp->left->val;
                }
                if (temp->right) {
                    q.push({temp->right, temp});
                    sump += temp->right->val;
                }
                p[temp] = sump;
            }
            n = r.size();
            while (n--) {
                temp = r.front().first, pre = r.front().second;
                r.pop();
                temp->val = sum - p[pre];
            }
        }
        return root;
    }
};