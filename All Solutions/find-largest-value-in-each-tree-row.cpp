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
    vector<int> largestValues(TreeNode* root) 
    {
        vector<int> a;
        if(root==NULL)
            return a;
        vector<int> x;
        queue<TreeNode*> q;
        TreeNode *cur,*back=root;
        int max;
        q.push(root);
        while(!q.empty())
        {
            max=INT_MIN;
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
            for(auto e: x)
                if(e>max)
                    max=e;
            a.push_back(max);
            x.resize(0);
        }
        return a;    
    }
};