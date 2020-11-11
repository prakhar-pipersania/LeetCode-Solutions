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
    int traverse(TreeNode* root,int &c)
    {
        int l=0,r=0;
        if(root->left!=NULL)
            l=traverse(root->left,c);
        if(root->right!=NULL)
            r=traverse(root->right,c);
        c+=abs(l-r);
        return (l+r+root->val);
    }
    int findTilt(TreeNode* root) 
    {
        int c=0;
        if(root!=NULL)
            traverse(root,c);
        return c;
    }
};
