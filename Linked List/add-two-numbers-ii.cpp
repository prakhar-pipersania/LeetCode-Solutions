/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head->next==NULL)
            return head;
        ListNode* p= reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        l1=reverse(l1);
        l2=reverse(l2);
        int v,c=0;
        ListNode *res=NULL,*temp=NULL;
        for(;l1!=NULL&&l2!=NULL;l1=l1->next,l2=l2->next)
        {
            v=(l1->val+l2->val+c);
            c=v/10,v%=10;
            ListNode* n=new ListNode;
            n->val=v;
            n->next=NULL;
            if(res==NULL)
                res=n,temp=res;
            else
                temp->next=n,temp=temp->next;
        }
        for(;l1!=NULL;l1=l1->next)
        {
            v=(l1->val+c);
            c=v/10,v%=10;
            ListNode* n=new ListNode;
            n->val=v;
            n->next=NULL;
            temp->next=n,temp=temp->next;
        }
        for(;l2!=NULL;l2=l2->next)
        {
            v=(l2->val+c);
            c=v/10,v%=10;
            ListNode* n=new ListNode;
            n->val=v;
            n->next=NULL;
            temp->next=n,temp=temp->next;
        }
        if(c)
        {
            ListNode* n=new ListNode;
            n->val=1,n->next=NULL,temp->next=n;
        }
        return reverse(res);
    }
};
