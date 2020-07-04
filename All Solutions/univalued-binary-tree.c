/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int preorder(struct TreeNode* temp,int x)
{
    int l=1,r=1;
    if(temp->val!=x)
        return false;
    if(temp->left!=NULL)
        l=preorder(temp->left,x);
    if(temp->right!=NULL)
        r=preorder(temp->right,x);
    if(l!=0&&r!=0)
        return 1;
    return 0;
}
bool isUnivalTree(struct TreeNode* root)
{
    struct TreeNode *temp=root;
    int v=preorder(temp,root->val);
    if(v==1)
        return true;
    return false;
}
