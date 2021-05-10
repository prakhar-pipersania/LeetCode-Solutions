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
    int maxdepth(TreeNode* root)
    {
        int l=0,r=0;
        if(root->left!=NULL)
            l=maxdepth(root->left);
        if(root->right!=NULL)
            r=maxdepth(root->right);
        return (l>r?l+1:r+1);
    }
    void placevalue(vector<vector<string>> &x,TreeNode* root,int level,int start,int end)
    {
        int mid=(start+end)/2;
        x[level++][mid]=to_string(root->val);
        if(root->left!=NULL)
            placevalue(x,root->left,level,start,mid);
        if(root->right!=NULL)
            placevalue(x,root->right,level,mid,end);
    }
    vector<vector<string>> printTree(TreeNode* root) 
    {
        int d=maxdepth(root);
        vector<vector<string>> x(d,vector<string> ((1<<d)-1));
        placevalue(x,root,0,-1,1<<d);
        return x;
    }
};