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
    void travs(TreeNode* root,int ox,int &min,int &max)
    {
        if(root->left!=NULL)
            travs(root->left,ox-1,min,max);
        if(ox<min)
            min=ox;
        if(ox>max)
            max=ox;
        if(root->right!=NULL)
            travs(root->right,ox+1,min,max);
    }
    void traverse(vector<vector<int>> &x,vector<vector<int>> &y,TreeNode* root,int ox,int oy,int min)
    {
        if(root->left!=NULL)
            traverse(x,y,root->left,ox-1,oy-1,min);
        y[ox+min].push_back(oy),x[ox+min].push_back(root->val);
        if(root->right!=NULL)
            traverse(x,y,root->right,ox+1,oy-1,min);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        if(root==NULL)
            return {};
        int min=0,max=0;
        travs(root,0,min,max);
        min=abs(min);
        vector<int> temp,temp2;
        vector<vector<int>> x(min+max+1);
        vector<vector<int>> y(min+max+1);
        traverse(x,y,root,0,0,min);
        for(int i=0;i<x.size();i++)
        {
            while(1)
            {
                min=INT_MIN;
                for(int j=0;j<y[i].size();j++)
                    if(y[i][j]>min)
                        min=y[i][j];
                if(min==INT_MIN)
                    break;
                for(int j=0;j<y[i].size();j++)
                    if(y[i][j]==min)
                        temp.push_back(x[i][j]),y[i][j]=INT_MIN;
                sort(temp.begin(),temp.end());
                for(int j=0;j<temp.size();j++)
                    temp2.push_back(temp[j]);
                temp.resize(0);
            }
            x[i]=temp2;
            temp2.resize(0);
        }
        return x;
    }
};
