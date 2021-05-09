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
class FindElements {
public:
    TreeNode* r;
    unordered_set<int> x;
    void filltree(TreeNode* root,int par,short add)
    {
        root->val=(2*par)+add;
        x.insert(root->val);
        if(root->left!=NULL)
            filltree(root->left,root->val,1);
        if(root->right!=NULL)
            filltree(root->right,root->val,2);
    }
    FindElements(TreeNode* root) 
    {
        r=root;
        r->val=0;
        x.insert(r->val);
        if(root->left!=NULL)
            filltree(r->left,r->val,1);
        if(root->right!=NULL)
            filltree(r->right,r->val,2);
    }
    bool find(int target) 
    {
        return (x.find(target)!=end(x)?1:0);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
 