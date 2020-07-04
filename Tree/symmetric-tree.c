/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int inorder(struct TreeNode* l,struct TreeNode* r)
{
    if((l==NULL&&r!=NULL)||(l!=NULL&&r==NULL))
        return -1;
    if(l==NULL&&r==NULL)
        return 0;
    int le=inorder(l->left,r->right);
    if(l->val!=r->val)
        return -1;
    int ri=inorder(l->right,r->left);
    if(le==0&&ri==0)
        return 0;
    return -1;
}
bool isSymmetric(struct TreeNode* root)
{
    struct TreeNode *l=root,*r=root;
    int result=inorder(l,r);
    if(result==0)
        return true;
    return false;
}
