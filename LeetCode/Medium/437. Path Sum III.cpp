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
    void dfs (vector<long long> sums,int& count,TreeNode* root,const int& target)
    {
        if (root == NULL)
            return;
        long long val = root->val;
        for (int i=0;i < sums.size();i++)
        {
            sums[i] += val;
            if (sums[i] == target)
                count++;
        }
        if (val == target)
            count++;
        sums.push_back(val);
        dfs(sums,count,root->left,target);
        dfs(sums,count,root->right,target);
    }

    int pathSum(TreeNode* root, int targetSum) {
        vector<long long> sums;
        int count = 0;
        dfs (sums,count,root,targetSum);
        return count;
    }
};