/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void seinorder(TreeNode* root,string &x)
    {
        if(root->left!=NULL)
            x+="L",seinorder(root->left,x),x+="-";
        x+=to_string(root->val);
        if(root->right!=NULL)
            x+="R",seinorder(root->right,x),x+="-";
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) 
    {
        string x;
        if(root!=NULL)
            seinorder(root,x);
        return x;
    }
    int deinorder(TreeNode* root,string &s,int start)
    {
        for(int i=start;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                root->val=(root->val*10)+(s[i]-'0');
            }
            else if(s[i]=='L')
            {
                root->left=new TreeNode();
                i=deinorder(root->left,s,i+1);
            }
            else if(s[i]=='R')
            {
                root->right=new TreeNode();
                i=deinorder(root->right,s,i+1);
            }
            else
            {
                return i;
            }
        }
        return 0;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string &data) 
    {
        TreeNode* root=NULL;
        if(data.size()>0)
        {
            root=new TreeNode();
            deinorder(root,data,0);
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
