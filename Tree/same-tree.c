/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int preorder(struct TreeNode* p,struct TreeNode*q)
{
    if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL))
        return -1;
    if(p==NULL&&q==NULL)
        return 0;
    if(p->val!=q->val)
        return -1;
    int left=preorder(p->left,q->left);
    int right=preorder(p->right,q->right);
    if(left==0&&right==0)
        return 0;
    else 
        return -1;
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    int result=preorder(p,q);
    if(result==-1)
        return false;
    return true;
}
