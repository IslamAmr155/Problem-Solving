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
    unordered_map<int,vector<int>> m;

    void dfs(TreeNode* root)
    {
        if (!root) return;
        if (root->left) {
            m[root->val].push_back(root->left->val);
            m[root->left->val].push_back(root->val);
            dfs(root->left);
        }
        if (root->right) {
            m[root->val].push_back(root->right->val);
            m[root->right->val].push_back(root->val);
            dfs(root->right);
        }
    }

    int amountOfTime(TreeNode* root, int start) {
        dfs(root);
        set<int> s;
        queue<int> q;
        q.push(start);
        int n = 0, ans = -1;
        while (!q.empty()) {
            ans++;
            n = q.size();
            while (n--) {
                int u = q.front();
                q.pop();
                s.insert(u);
                for (int& x:m[u]) 
                    if(!s.contains(x)) q.push(x);
            }
        }
        return ans;
    }
};