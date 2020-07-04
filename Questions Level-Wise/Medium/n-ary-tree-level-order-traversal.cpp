/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int>> a;
        if(root==NULL)
            return a;
        vector<int> x;
        queue<Node*> q;
        Node *cur,*back=root;
        q.push(root);
        while(!q.empty())
        {
            do
            {
                cur=q.front();
                for(int i=0;i<q.front()->children.size();i++)
                    q.push(q.front()->children[i]);
                x.push_back(q.front()->val);
                q.pop();
            }while(cur!=back);
            back=q.back();
            a.push_back(x);
            x.resize(0);
        }
        return a;    
    }
};