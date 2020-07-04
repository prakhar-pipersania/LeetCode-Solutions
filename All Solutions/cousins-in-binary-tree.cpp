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
    bool isCousins(TreeNode* root, int x, int y) 
    {
        TreeNode *cur,*back=root;
        queue<TreeNode*> q;
        vector<int> cou;
        int child1,child2,flag;
        q.push(root);
        while(!q.empty())
        {
            flag=0;
            do
            {
                child1=child2=0;
                cur=q.front();
                if(q.front()->left!=NULL)
                {
                    child1=q.front()->left->val;
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL)
                {
                    child2=q.front()->right->val;
                    q.push(q.front()->right);
                }
                if((child1==x&&child2==y)||(child1==y&&child2==x))
                    return false;
                cou.push_back(q.front()->val);
                q.pop();
            }while(cur!=back);
            back=q.back();
            for(auto e: cou)
                if(e==x||e==y)
                    flag++;
            if(flag==2)
                return true;
            cou.resize(0);
        }
        return false;
    }
};
