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
    int findBottomLeftValue(TreeNode* root) 
    {
        TreeNode *cur,*back=root;
        queue<TreeNode*> q;
        vector<int> x;
        q.push(root);
        while(!q.empty())
        {
            x.resize(0);
            do
            {
                cur=q.front();
                if(q.front()->left!=NULL)
                    q.push(q.front()->left);
                if(q.front()->right!=NULL)
                    q.push(q.front()->right);
                x.push_back(q.front()->val);
                q.pop();
            }while(cur!=back);
            back=q.back();
        }
        return x[0];    
    }
};