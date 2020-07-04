/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int flag;
int PathSum(struct TreeNode* root, int sum,int val)
{
    if(root==NULL)
        return 0;
    val+=root->val;
    if(root->left==NULL&&root->right==NULL&&val==sum)
        flag=1;
    PathSum(root->left,sum,val);
    PathSum(root->right,sum,val);
    return 0;
}
bool hasPathSum(struct TreeNode* root, int sum)
{
    flag=0;
    PathSum(root,sum,0);
    if(flag==1)
        return true;
    return false;
}
