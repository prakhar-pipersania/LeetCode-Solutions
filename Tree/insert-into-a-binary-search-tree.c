/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* insertIntoBST(struct TreeNode* root, int val)
{
    struct TreeNode *troot=root,*v;
    if(troot==NULL)
    {
        struct TreeNode *n=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        n->val=val;
        n->left=n->right=NULL;
        return n;
    }
    if(val<troot->val)
    {
        v=insertIntoBST(troot->left,val);
        troot->left=v;
    }
    if(val>troot->val)
    {
        v=insertIntoBST(troot->right,val);
        troot->right=v;
    }
    return root;
}
