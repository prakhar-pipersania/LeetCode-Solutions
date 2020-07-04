/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int k;
void findleafnodes(struct TreeNode* root,int *a)
{
    if(root->left==NULL&&root->right==NULL)
        a[k++]=root->val;
    if(root->left!=NULL)
        findleafnodes(root->left,a);
    if(root->right!=NULL)
        findleafnodes(root->right,a);
}
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2)
{
    k=0;
    int a1[100],a2[100];
    findleafnodes(root1,a1);
    int a1Size=k;
    k=0;
    findleafnodes(root2,a2);
    int a2Size=k;
    if(a1Size!=a2Size)
        return false;
    for(int i=0;i<a1Size;i++)
        if(a1[i]!=a2[i])
            return false;
    return true;
}
