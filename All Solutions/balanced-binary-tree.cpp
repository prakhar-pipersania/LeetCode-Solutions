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
    int depth(TreeNode* root,bool &flag)
    {
        if(flag)
        {
            if(root==NULL)
                return 0;
            int l=depth(root->left,flag);
            int r=depth(root->right,flag);
            if(abs(l-r)>1)
                flag=0;
            return (l>=r?l+1:r+1);
        }
        return 0;
    }
    bool isBalanced(TreeNode* root)
    {
        bool flag=1;
        depth(root,flag);
        return flag;
    }
};
