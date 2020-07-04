/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum;
int maxDepth(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    int l=maxDepth(root->left);
    int r=maxDepth(root->right); 
    if(l>r)
        return (l+1);
    return (r+1);
}
void deepnodesum(struct TreeNode* root,int depth,int val)
{
    if(val==depth)
        sum+=root->val;
    if(root->left!=NULL)
        deepnodesum(root->left,depth,val+1);
    if(root->right!=NULL)
        deepnodesum(root->right,depth,val+1);
}
int deepestLeavesSum(struct TreeNode* root)
{
    int mdepth=maxDepth(root);sum=0;
    deepnodesum(root,mdepth,1);
    return sum;
}
