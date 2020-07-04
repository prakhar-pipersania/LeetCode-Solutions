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
int inorder(struct TreeNode* root,int *a,int v)
{
    int val=v;
    if(root->left!=NULL)
        val=inorder(root->left,a,val);
    a[val]=root->val;
    val=val+1;
    if(root->right!=NULL)
        val=inorder(root->right,a,val);
    return val;
}
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *a=(int*)calloc(sizeof(int),10001);
    if(root==NULL)
    {
        *returnSize=0;
        return a;
    }
    *returnSize=inorder(root,a,0);
    return a;  
}
