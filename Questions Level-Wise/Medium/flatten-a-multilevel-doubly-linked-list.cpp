/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* traverse(Node* head,Node* root,Node* cur)
    {
        for(;head!=NULL;head=head->next)
        {
            Node* p=new Node;
            p->val=head->val;
            p->prev=p->next=p->child=NULL;
            if(root==NULL)
                cur=root=p;
            else
                cur->next=p,p->prev=cur,cur=cur->next;
            if(head->child!=NULL)
            {
                root=traverse(head->child,root,cur);
                while(cur->next)
                    cur=cur->next;
            }
        }
        return root;
    }
    Node* flatten(Node* head) 
    {
        if(head==NULL)
            return head;
        Node *root=NULL,*cur=NULL;
        root=traverse(head,root,cur);
        return root;
    }
};