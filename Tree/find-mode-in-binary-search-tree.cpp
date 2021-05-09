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
    void traverse(TreeNode* root,unordered_map<int,int> &x,int &max)
    {
        x[root->val]++;
        if(x[root->val]>max)
            max=x[root->val];
        if(root->left!=NULL)
            traverse(root->left,x,max);
        if(root->right!=NULL)
            traverse(root->right,x,max);
    }
    vector<int> findMode(TreeNode* root) 
    {
        int max=0;
        vector<int> res;
        unordered_map<int,int> x;
        if(root!=NULL)
            traverse(root,x,max);
        for(auto e: x)
            if(e.second==max)
                res.push_back(e.first);
        return res;
    }
};