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
int post(struct Node* root,int *a,int v)
{
    int val=v;
    for(int i=0;i<root->numChildren;i++)
        val=post(root->children[i],a,val);
    a[val]=root->val;
    return val+1;
}
int* postorder(struct Node* root, int* returnSize) 
{
    int *a=(int*)calloc(sizeof(int),10001);
    if(root==NULL)
    {
        *returnSize=0;
        return a;
    }
    *returnSize=post(root,a,0);
    return a;    
}
