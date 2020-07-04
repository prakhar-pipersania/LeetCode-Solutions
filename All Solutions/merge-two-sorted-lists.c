/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *p,*temp,*temp1,*temp2,*list=NULL;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    while(l1!=NULL&&l2!=NULL)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(l1->val<=l2->val)
        {
            p->val=l1->val;
            l1=l1->next;
        }
        else
        {
            p->val=l2->val;
            l2=l2->next;
        }
        p->next=NULL;
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
    while(l1!=NULL)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=l1->val;
        l1=l1->next;
        p->next=NULL;
        temp->next=p;
        temp=temp->next; 
    }
    while(l2!=NULL)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->val=l2->val;
        l2=l2->next;
        p->next=NULL;
        temp->next=p;
        temp=temp->next; 
    }
    return list;
}
