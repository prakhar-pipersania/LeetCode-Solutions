/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int z,c=0;
    struct ListNode *temp,*p,*list=NULL;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    for(;l1!=NULL&&l2!=NULL;l1=l1->next,l2=l2->next)
    {
        z=c+l1->val+l2->val;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->next=NULL;
        if(z>9)
        {
            p->val=z%10;
            c=1;
        }
        else
        {
            p->val=z;
            c=0;
        }
        if(list==NULL)
        {
            list=p;
            temp=list;
        }
        else
        {
        temp->next=p;
        temp=temp->next; 
        }
    }
    for(;l1!=NULL;l1=l1->next)
    {
        z=c+l1->val;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->next=NULL;
        if(z>9)
        {
            p->val=z%10;
            c=1;
        }
        else
        {
            p->val=z;
            c=0;
        }
        temp->next=p;
        temp=temp->next; 
    }
    for(;l2!=NULL;l2=l2->next)
    {
        z=c+l2->val;
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->next=NULL;
        if(z>9)
        {
            p->val=z%10;
            c=1;
        }
        else
        {
            p->val=z;
            c=0;
        }
        temp->next=p;
        temp=temp->next;
    }
    if(c>0)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=c;
        p->next=NULL;
        temp->next=p;
        temp=temp->next; 
    }
    return list;
}
