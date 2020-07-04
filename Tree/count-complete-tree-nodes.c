/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int c;
void count(struct TreeNode* root)
{
    c++;
    if(root->left!=NULL)
        count(root->left);
    if(root->right!=NULL)
        count(root->right);
}
int countNodes(struct TreeNode* root)
{
    c=0;
    if(root==NULL)
        return 0;
    count(root);
    return c;
}
