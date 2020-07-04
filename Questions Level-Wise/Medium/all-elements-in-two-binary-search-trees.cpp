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
    void traverse(TreeNode* root,vector<int> &A)
    {
        if(root->left!=NULL)
            traverse(root->left,A);
        A.push_back(root->val);
        if(root->right!=NULL)
            traverse(root->right,A);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> A;
        if(root1!=NULL)
            traverse(root1,A);
        if(root2!=NULL)
            traverse(root2,A);
        sort(A.begin(),A.end());
        return A;
    }
};
