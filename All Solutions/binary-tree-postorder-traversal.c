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
int postorder(struct TreeNode* root,int *a,int v)
{
    int val=v;
    if(root->left!=NULL)
        val=postorder(root->left,a,val);
    if(root->right!=NULL)
        val=postorder(root->right,a,val);
    a[val]=root->val;
    return val+1;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *a=(int*)calloc(sizeof(int),10001);
    if(root==NULL)
    {
        *returnSize=0;
        return a;
    }
    *returnSize=postorder(root,a,0);
    return a; 
}
