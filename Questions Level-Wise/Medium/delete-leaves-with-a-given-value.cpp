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
    int traverse(TreeNode* root, int target)
    {
        if(root->left!=NULL&&traverse(root->left,target))
            root->left=NULL; 
        if(root->right!=NULL&&traverse(root->right,target))
            root->right=NULL;
        return (root->left==NULL&&root->right==NULL&&root->val==target?1:0);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) 
    {
        traverse(root,target); 
        if(root->left==NULL&&root->right==NULL&&root->val==target)
            return NULL;
        return root;
    }
};
