/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val)
{
    struct TreeNode *temp=NULL;
    int i,j,k;
    if(root==NULL)
        return NULL;
    if(root->val==val)
    {
        temp=root;
        return temp;
    }
    if(root->val>=val)
        temp=searchBST(root->left,val);
    if(root->val<=val)
        temp=searchBST(root->right,val);
    return temp;
}
