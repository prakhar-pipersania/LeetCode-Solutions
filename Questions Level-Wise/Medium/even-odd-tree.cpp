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
    bool isEvenOddTree(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        int level=0,val;
        queue<TreeNode*> q;
        TreeNode *cur,*back=root;
        q.push(root);
        while(!q.empty())
        {
            val=INT_MAX;
            if(level%2==0)
                val=0;
            do
            {
                cur=q.front();
                if(q.front()->left!=NULL)
                    q.push(q.front()->left);
                if(q.front()->right!=NULL)
                    q.push(q.front()->right);
                if(level%2!=0)
                {
                    if(((q.front()->val)>=val)||((q.front()->val)%2!=0))
                        return false;
                }
                else
                {
                    if(((q.front()->val)<=val)||((q.front()->val)%2==0))
                        return false;    
                }
                val=q.front()->val;
                q.pop();
            }while(cur!=back);
            back=q.back();
            level++;
        }
        return true;
    }
};
