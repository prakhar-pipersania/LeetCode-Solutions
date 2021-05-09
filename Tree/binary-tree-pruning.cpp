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
    int prune(TreeNode* root)
    {
        if(root->left!=NULL&&(!prune(root->left)))
                root->left=NULL;
        if(root->right!=NULL&&(!prune(root->right)))
                root->right=NULL;
        return ((root->left==NULL&&root->right==NULL&&root->val==0)?0:1);
    }
    TreeNode* pruneTree(TreeNode* root)
    {
        if(root!=NULL)
            prune(root);
        else
            return root;
        if(root->val==0&&root->left==NULL&&root->right==NULL)
            return NULL;
        return root;
    }
};
