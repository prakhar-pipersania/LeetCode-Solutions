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
    void path(TreeNode* root, int sum,vector<vector<int>> &A,vector<int> &B,int val)
    {
        val+=root->val;
        B.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&val==sum)
            A.push_back(B);
        if(root->left!=NULL)
            path(root->left,sum,A,B,val);
        if(root->right!=NULL)
            path(root->right,sum,A,B,val);
        B.resize(B.size()-1);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) 
    {
        vector<vector<int>> A;
        vector<int> B;
        if(root==NULL)
            return A;
        path(root,sum,A,B,0);
        return A;
    }
};
