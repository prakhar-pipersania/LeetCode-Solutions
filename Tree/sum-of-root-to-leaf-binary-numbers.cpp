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
    void preorder(TreeNode* root,string s,int &sum)
    {
        s+='0'+root->val;
        if(root->left==NULL&&root->right==NULL)
            for(int i=0,j=s.size()-1;j>=0;i++,j--)
                sum+=(s[j]-'0')*pow(2,i);
        if(root->left!=NULL)
            preorder(root->left,s,sum);
        if(root->right!=NULL)
            preorder(root->right,s,sum);
        s.resize(s.size()-1);
    }
    int sumRootToLeaf(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        int sum=0;
        string s;
        preorder(root,s,sum);
        return sum;
    }
};
