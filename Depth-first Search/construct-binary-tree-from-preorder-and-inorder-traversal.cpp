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
    TreeNode* construct(vector<int>& pre,vector<int>& in,int &spre,int sin,int ein)
    {
        spre++;
        int mid=0;
        TreeNode *root=NULL;
        if(spre<pre.size())
        {
            root=new TreeNode;
            root->val=pre[spre];
            for(int i=sin;i<=ein;i++)
                if(in[i]==root->val)
                {
                    mid=i;
                    break;
                }
        }
        if(sin<=mid-1)
            root->left=construct(pre,in,spre,sin,mid-1);
        if(mid+1<=ein)
            root->right=construct(pre,in,spre,mid+1,ein);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int spre=-1;
        return construct(preorder,inorder,spre,0,inorder.size()-1);
    }
};
