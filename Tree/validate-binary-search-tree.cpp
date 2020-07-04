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
    void inorder(TreeNode* root,vector<int> &A)
    {
        if(root->left!=NULL)
            inorder(root->left,A);
        A.push_back(root->val);
        if(root->right!=NULL)
            inorder(root->right,A);
    }
    bool isValidBST(TreeNode* root) 
    {
        int c=0;
        vector<int> A;
        if(root==NULL)
            return true;
        inorder(root,A);
        for(int i=0;i<A.size()-1;i++)
            if(A[i]<A[i+1])
                c++;
        if(c==A.size()-1)
            return true;
        return false;      
    }
};
