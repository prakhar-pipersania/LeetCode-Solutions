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
    TreeNode* construct(vector<int>& post,vector<int>& in,int &spost,int sin,int ein)
    {
        spost--;
        int mid=0;
        TreeNode *root=NULL;
        if(spost>=0)
        {
            root=new TreeNode;
            root->val=post[spost];
            for(int i=sin;i<=ein;i++)
                if(in[i]==root->val)
                {
                    mid=i;
                    break;
                }
        }
        if(mid+1<=ein)
            root->right=construct(post,in,spost,mid+1,ein);
        if(sin<=mid-1)
            root->left=construct(post,in,spost,sin,mid-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int spost=postorder.size();
        return construct(postorder,inorder,spost,0,inorder.size()-1);    
    }
};
