/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root)
{
    int p=0,l=0;
    if(root==NULL)
        return 0;
    for(int i=0;i<root->numChildren;i++)
    {
        int p=(int)maxDepth(root->children[i]);
        if(p>l)
            l=p; 
    }
    return (l+1);
}
