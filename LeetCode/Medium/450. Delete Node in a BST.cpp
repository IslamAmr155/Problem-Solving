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
    void transplant(TreeNode*& root,TreeNode* p,TreeNode* c,TreeNode*& g)
    {
        if (p == root)
            root = c;
        else if (p == g->left)
            g->left = c;
        else
            g->right = c;
    }

    TreeNode* min_tree (TreeNode* root,TreeNode* &parent)
    {
        while (root->left)
        {
            parent = root;
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return root;
        TreeNode* target = root,*parent = nullptr;

        while (target && target->val != key)
        {
            parent = target;
            if (target->val > key)
                target = target->left;
            else
                target = target->right;
        }

        TreeNode* temp,*temp_parent = target;

        if (!target)
            return root;
        
        if (!target->left)
            transplant(root,target,target->right,parent);
        else if (!target->right)
            transplant(root,target,target->left,parent);
        else
        {
            temp = min_tree(target->right,temp_parent);
            if (temp_parent != target)
            {
                transplant(root,temp,temp->right,temp_parent);
                temp->right = target->right;
            }
            transplant(root,target,temp,parent);
            temp->left = target->left;
        }
        return root;
    }
};