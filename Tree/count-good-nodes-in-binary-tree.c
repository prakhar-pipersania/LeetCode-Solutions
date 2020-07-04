/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int node(struct TreeNode* root)
{
    return root->val;
}
int goodNodes(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    int v=good(root,root->val);
    return v+1;
}
int good(struct TreeNode* root,int max)
{
    int c=0,v1=0,v2=0,l=0,r=0;
    if(root->val>max)
        max=root->val;
    if(root->left!=NULL)
    {
        l=node(root->left);
        if(l>=max)
        {
            c++;
            v1=good(root->left,l);
        }
        else
        {
            v1=good(root->left,max);
        }
    }
    if(root->right!=NULL)
    {
        r=node(root->right);
        if(r>=max)
        {
            c++;
            v2=good(root->right,r);
        }
        else
        {
            v2=good(root->right,max);
        }
    }
    return c+v1+v2;   
}