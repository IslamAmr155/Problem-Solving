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
    int ans = 0;

    vector<int> dfs(TreeNode* root,int& d) {
        if (!root) return vector<int> (d+1);
        if (!root->left && !root->right) {
            vector<int> v(d+1);
            v[1]++;
            return v;
        }
        vector<int> left = dfs(root->left, d), right = dfs(root->right, d);
        for (int i=1;i<left.size();i++)
            for (int j=1;j<right.size();j++)
                if (i+j <= d) ans += left[i]*right[j];
        vector<int> v(d+1);
        for (int i=v.size()-2;i>=1;i--) v[i+1] = left[i] + right[i];
        return v;
    }

    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return ans;
    }
};