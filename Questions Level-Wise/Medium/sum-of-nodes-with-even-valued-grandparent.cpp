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
    void inorder(TreeNode* root,vector<int> &x,int &c)
    {
        x.push_back(root->val);
        if(x.size()>2&&x[x.size()-3]%2==0)
            c+=root->val;    
        if(root->left!=NULL)
            inorder(root->left,x,c);
        if(root->right!=NULL)
            inorder(root->right,x,c);
        x.pop_back();
    }
    int sumEvenGrandparent(TreeNode* root) 
    {
        int c=0;
        vector<int> x;
        inorder(root,x,c);
        return c;
    }
};
