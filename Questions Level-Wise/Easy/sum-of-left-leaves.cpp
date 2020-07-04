C++ Code
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int inorder(struct TreeNode* root)
    {
        if(root==NULL)
            return 0;
        inorder(root->left);
        if(root->left==NULL&&root->right==NULL)
            sum+=root->val;
        if((root->right!=NULL&&root->right->right!=NULL)||(root->right!=NULL&&root->right->left!=NULL))
            inorder(root->right);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
          if(root==NULL||(root->left==NULL&&root->right==NULL))
        return 0;
    return inorder(root); 
    }
};
