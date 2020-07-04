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
    void TreePaths(TreeNode* root,vector<string> &A,string S)
    {
        string temp;
        int val=root->val;
        if(val<0)
            val*=-1;
        for(;val>0;val/=10)
            temp+='0'+val%10;
        reverse(temp.begin(),temp.end());
        if(root->val<0)
            S+='-';
        S+=temp;
        if(root->left==NULL&&root->right==NULL)
            A.push_back(S);
        else
            S+="->";
        if(root->left!=NULL)
            TreePaths(root->left,A,S);
        if(root->right!=NULL)
            TreePaths(root->right,A,S);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        string S;
        vector<string> A;
        if(root==NULL)
            return A;
        TreePaths(root,A,S);
        return A;
    }
};
