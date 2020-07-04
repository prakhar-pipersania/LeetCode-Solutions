/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int k;
void inorder(struct TreeNode* root,int *a)
{
    if(root->left!=NULL)
        inorder(root->left,a);
    a[k++]=root->val;
    if(root->right!=NULL)
        inorder(root->right,a);
}
struct TreeNode* increasingBST(struct TreeNode* root)
{
    int a[101];k=0;
    inorder(root,a);
    struct TreeNode *p,*temp,*newroot=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    newroot->val=a[0];
    newroot->left=newroot->right=NULL;
    temp=newroot;
    for(int i=1;i<k;i++)
    {
        p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        p->val=a[i];
        p->left=p->right=NULL;
        temp->right=p;
        temp=p;
    }
    return newroot;
}
