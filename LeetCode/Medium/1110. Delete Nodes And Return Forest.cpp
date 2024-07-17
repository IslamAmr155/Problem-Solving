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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        bool found = false;
        for (int x : to_delete) {
            found = false;
            while(!found) {
                temp = q.front();
                if (temp->val == x) {
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    q.pop();
                    break;
                }
                stack<TreeNode*> s;
                s.push(temp);
                while(!s.empty()) {
                    temp = s.top();
                    s.pop();
                    if (temp->left && temp->left->val == x) {
                        found = true;
                        if (temp->left->left) q.push(temp->left->left);
                        if (temp->left->right) q.push(temp->left->right);
                        temp->left = NULL;
                        break;
                    } 
                    if (temp->right && temp->right->val == x) {
                        found = true;
                        if (temp->right->left) q.push(temp->right->left);
                        if (temp->right->right) q.push(temp->right->right);
                        temp->right = NULL;
                        break;
                    }
                    if(temp->right) s.push(temp->right);
                    if(temp->left) s.push(temp->left);
                }
                if (!found) {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        vector<TreeNode*> ans;
        while(!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};