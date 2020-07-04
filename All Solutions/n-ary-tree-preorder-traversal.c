/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int pre(struct Node* root,int *a,int v)
{
    int val=v+1;
    a[v]=root->val;
    for(int i=0;i<root->numChildren;i++)
        val=pre(root->children[i],a,val);
    return val;
}
int* preorder(struct Node* root, int* returnSize) 
{
    int *a=(int*)calloc(sizeof(int),10001);
    if(root==NULL)
    {
        *returnSize=0;
        return a;
    }
    *returnSize=pre(root,a,0);
    return a;
}
