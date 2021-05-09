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
    void checkpal(vector<int> &x,int &c)
    {
        short flag=0;
        for(auto e: x)
            if(e%2==1)
                flag++;
        if(flag<2)
            c++;
    }
    void dfs(TreeNode* root,vector<int> &x,int &c)
    {
        x[root->val-1]++;
        if(root->left!=NULL)
            dfs(root->left,x,c);
        if(root->right!=NULL)
            dfs(root->right,x,c);
        if(root->left==NULL&&root->right==NULL)
            checkpal(x,c);
        x[root->val-1]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        vector<int> x(9);
        int c=0;
        dfs(root,x,c);
        return c;
    }
};
