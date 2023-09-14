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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> cur,next;
        int ma = INT_MIN,s = 0,cur_lev = 1,max_lev = 1;
        cur.push(root);
        TreeNode* temp;
        while (!cur.empty())
        {
            temp = cur.front();
            cur.pop();
            s += temp->val;
            if (temp->right) next.push(temp->right);
            if (temp->left) next.push(temp->left);
            if (cur.empty())
            {
                if (s > ma)
                {
                    ma = s;
                    max_lev = cur_lev;
                }
                cur.swap(next);
                s = 0;
                cur_lev++;
            }
        }
        return max_lev;
    }
};