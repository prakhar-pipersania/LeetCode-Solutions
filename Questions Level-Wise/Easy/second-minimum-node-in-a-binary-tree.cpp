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
    void Value(TreeNode* root,map<int,int> &A)
    {
        A[root->val]++;
        if(root->left!= NULL)
            Value(root->left,A);
        if(root->right!= NULL)
            Value(root->right,A);
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
        int c=0;
        map<int,int> A; 
        if(root==NULL)
            return -1;
        Value(root,A);
        for(auto e: A)
        {
            c++;
            if(c==2)
                return e.first;
        }
        return -1;
    }
};