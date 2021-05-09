/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(root==NULL)
            return root;
        vector<Node*> a;
        queue<Node*> x;
        x.push(root);
        Node *cur,*back=root;
        while(!x.empty())
        {
            do
            {
                cur=x.front();
                a.push_back(cur);
                if(cur->left!=NULL)
                    x.push(cur->left);
                if(cur->right!=NULL)
                    x.push(cur->right);
                x.pop();
            }
            while(cur!=back);
            back=x.back();
            for(int i=0;i<a.size()-1;i++)
                a[i]->next=a[i+1];
            a.resize(0);
        }
        return root;
    }
};
