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
class BSTIterator {
public:
    int top=-1;
    vector<int> x;
    void iterator(TreeNode* root) 
    {
        if(root!=NULL)
        {
            if(root->left!=NULL)
                iterator(root->left);
            x.push_back(root->val);
            if(root->right!=NULL)
                iterator(root->right); 
        }
    }
    BSTIterator(TreeNode* root) 
    {
        iterator(root);
    }
    /** @return the next smallest number */
    int next() 
    { 
        top++;
        return x[top];
    }
    /** @return whether we have a next smallest number */
    bool hasNext() 
    {
        if(top+1<x.size())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
 