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
    TreeNode* merge(TreeNode* t1, TreeNode* t2) 
    {
        t1->val+=t2->val;
        if(t1->left!=NULL&&t2->left!=NULL)
            t1->left=merge(t1->left,t2->left);
        else if(t2->left!=NULL)
            t1->left=t2->left;
        if(t1->right!=NULL&&t2->right!=NULL)
            t1->right=merge(t1->right,t2->right);
        else if(t2->right!=NULL)
            t1->right=t2->right;
        return t1;
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
    {
        if(t1!=NULL&&t2!=NULL)
            merge(t1,t2);
        if(t1==NULL)
            return t2;
        return t1;
    }
};
