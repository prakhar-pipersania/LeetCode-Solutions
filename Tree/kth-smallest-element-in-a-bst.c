/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int inorder(struct TreeNode* root,int *a,int k,int v)
{
    int val=v;
    if(root->left!=NULL)
        val=inorder(root->left,a,k,val);
    a[val]=root->val;
    if(val<k)
        val++;
    if(root->right!=NULL)
        val=inorder(root->right,a,k,val);
    return val;
}
int kthSmallest(struct TreeNode* root, int k)
{
    int a[k+1];
    inorder(root,a,k,0);
    return a[k-1];  
}
