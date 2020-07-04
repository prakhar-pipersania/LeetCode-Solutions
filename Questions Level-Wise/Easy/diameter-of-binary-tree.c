/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int depth(struct TreeNode* root)
{
    int res;
    if(root==NULL)
        return 0;
    int l=depth(root->left);
    int r=depth(root->right); 
    if(l>r)
        res=l+1;
    else
        res=r+1;
    return res;
}
int diameterOfBinaryTree(struct TreeNode* root)
{
    int res=0;
    if(root==NULL)
        return 0;
    res=depth(root->left)+depth(root->right);
    int l=diameterOfBinaryTree(root->left);
    int r=diameterOfBinaryTree(root->right);
    if(l>res)
        res=l;
    else if(r>res)
        res=r;
    return res;
}
