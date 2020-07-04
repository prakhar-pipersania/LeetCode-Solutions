/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root)
{
    int res;
    if(root==NULL)
        return 0;
    int l=maxDepth(root->left);
    int r=maxDepth(root->right); 
    if(l>r)
        res=l+1;
    else
        res=r+1;
    return res;
}
