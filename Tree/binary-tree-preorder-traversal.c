/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int preorder(struct TreeNode* root,int *a,int v)
{
    int val=v+1;
    a[v]=root->val;
    if(root->left!=NULL)
        val=preorder(root->left,a,val);
    if(root->right!=NULL)
        val=preorder(root->right,a,val);
    return val;
}
int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *a=(int*)calloc(sizeof(int),10001);
    if(root==NULL)
    {
        *returnSize=0;
        return a;
    }
    *returnSize=preorder(root,a,0);
    return a; 
}
