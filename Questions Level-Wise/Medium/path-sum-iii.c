/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int tsum;
int Sum(struct TreeNode* root, int sum,int val)
{
    if(root==NULL)
        return 0;
    val+=root->val;
    if(val==sum)
        tsum++;
    Sum(root->left,sum,val);
    Sum(root->right,sum,val);
    return 0;
}
void totalpath(struct TreeNode* root, int sum)
{
    Sum(root,sum,0);
    if(root->left!=NULL)
        totalpath(root->left,sum);
    if(root->right!=NULL)
        totalpath(root->right,sum);
}
int pathSum(struct TreeNode* root, int sum)
{
    tsum=0;
    if(root==NULL)
        return 0;
    totalpath(root,sum);
    return tsum;
}
