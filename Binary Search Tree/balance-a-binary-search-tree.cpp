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
    void inorder(TreeNode* root,vector<int> &x)
    {
        if(root->left!=NULL)
            inorder(root->left,x);
        x.push_back(root->val);
        if(root->right!=NULL)
            inorder(root->right,x);
    }
    TreeNode* buildtree(vector<int> &x,int s,int e)
    {
        TreeNode* root=new TreeNode();
        int mid=(s+e)/2;
        root->val=x[mid];
        if(s<=mid-1)
            root->left=buildtree(x,s,mid-1);
        if(mid+1<=e)
            root->right=buildtree(x,mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root)
    {
        vector<int> x;
        inorder(root,x);
        return buildtree(x,0,x.size()-1);
    }
};
