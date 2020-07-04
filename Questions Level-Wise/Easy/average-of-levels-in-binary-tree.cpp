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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> a;
        if(root==NULL)
            return a;
        double sum=0,c=0;
        queue<TreeNode*> q;
        TreeNode *cur,*back=root;
        q.push(root);
        while(!q.empty())
        {
            do
            {
                cur=q.front();
                if(q.front()->left!=NULL)
                    q.push(q.front()->left);
                if(q.front()->right!=NULL)
                    q.push(q.front()->right);
                sum+=q.front()->val;
                c++,q.pop();
            }while(cur!=back);
            back=q.back();
            a.push_back(sum/c);
            sum=c=0;
        }
        return a;    
    }
};
