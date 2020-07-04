/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minimumdepth;
int Depth(struct TreeNode* root,int depth)
{
    if(root==NULL)
        return 0;
    else
        depth++;
    if(root->left==NULL&&root->right==NULL&&depth<minimumdepth)
        minimumdepth=depth;
    Depth(root->left,depth);
    Depth(root->right,depth); 
    return minimumdepth;
}
int minDepth(struct TreeNode* root)
{
    minimumdepth=INT_MAX;
    if(root==NULL)
        return 0;
    Depth(root,0);
    return minimumdepth;
}
