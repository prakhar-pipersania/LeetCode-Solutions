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
    void traverse(TreeNode* root,vector<int> &x,int &maxval)
    {
        for(auto e: x)
            maxval=max(maxval,abs(e-root->val));
        x.push_back(root->val);
        if(root->left!=NULL)
            traverse(root->left,x,maxval);
        if(root->right!=NULL)
            traverse(root->right,x,maxval);
        x.pop_back();
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        int maxval=0;
        vector<int> x;
        traverse(root,x,maxval);
        return maxval;
    }
};
