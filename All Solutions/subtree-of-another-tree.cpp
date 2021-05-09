/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* s, TreeNode* t)
    {
        bool c=0;
        if(s->val==t->val)
            c=1;
        if(c)
        {
            if(s->left==NULL&&t->left==NULL)
                c=1;
            else if(s->left!=NULL&&t->left!=NULL)
                c=c&check(s->left,t->left);
            else
                c=0;
        }
        if(c)
        {
            if(s->right==NULL&&t->right==NULL)
                c=1;
            else if(s->right!=NULL&&t->right!=NULL)
                c=c&check(s->right,t->right);
            else
                c=0;
        }
        return c;
    }
    void checksubtree(TreeNode* s, TreeNode* t,bool &flag)
    {
        flag=check(s,t);
        if(!flag)
        {
            if(s->left!=NULL)
                checksubtree(s->left,t,flag); 
            if(!flag&&s->right!=NULL)
                checksubtree(s->right,t,flag); 
        }
    }
    bool isSubtree(TreeNode* s, TreeNode* t) 
    {
        bool flag=0;
            checksubtree(s,t,flag);    
        return flag;
    }
};