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
    void findstr(TreeNode* t,string &s)
    {
        s+=to_string(t->val);
        if(t->left!=NULL&&t->right!=NULL)
        {
            s+='(';
            findstr(t->left,s);
            s+=')';
            s+='(';
            findstr(t->right,s);
            s+=')';
        }
        else if(t->left==NULL&&t->right!=NULL)
        {
            s+="()(";
            findstr(t->right,s);
            s+=')';
        }
        else if(t->left!=NULL&&t->right==NULL)
        {
            s+='(';
            findstr(t->left,s);
            s+=')';
        }
    }
    string tree2str(TreeNode* t) 
    {
        if(t==NULL)
            return "";
        string s;
        findstr(t,s);
        return s;
    }
};
