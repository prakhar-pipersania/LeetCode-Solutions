/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* BST(int *a, int start,int end)
{
    int mid=((end-start)/2)+start;
    if(start>end)
        return NULL;
    if((end-start)%2!=0)
        mid++;
    struct TreeNode *p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    p->val=a[mid];
    p->left=BST(a,start,mid-1);
    p->right=BST(a,mid+1,end);
    return p;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize)
{
    if(numsSize==0)
        return NULL;
    struct TreeNode *root=BST(nums,0,numsSize-1);
    return root;
}
