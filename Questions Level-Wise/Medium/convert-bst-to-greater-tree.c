/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Gst(struct TreeNode* root,int val)
{
    if(root->right!=NULL)
        val=Gst(root->right,val);
    root->val=root->val+val;
    val=root->val;
    if(root->left!=NULL)
        val=Gst(root->left,val); 
    return val;
}
struct TreeNode* convertBST(struct TreeNode* root)
{
    if(root==NULL)
        return;
    Gst(root,0);
    return root;
}
