/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x)
{
    int c1=0,c2=0;
    struct ListNode *temp,*p,*temp2;
    if(head==NULL||head->next==NULL)
        return head;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->val<x)
            c2++;
        c1++;
    }
    if((c1==c2)||(c1-c2==c1))
        return head;
    temp=p=head;
    if(temp->val<x)
        for(temp=head;temp->next->val<x;temp=temp->next){}
    if(p->val>=x)
        for(p=head;p->next!=NULL&&p->next->val>=x;p=p->next){}
    else
        for(p=head;p->val<x;p=p->next){}
    temp2=p->next;
    if(temp->val>=x)
    {
        p->next=temp2->next;
        temp2->next=temp;
        temp=head=temp2;
        temp2=p->next;
    }
    while(temp2!=NULL)
    {
        if(temp2->val<x)
        {
            p->next=temp2->next;
            temp2->next=temp->next;
            temp->next=temp2;
            temp=temp->next;
            temp2=p->next;
        }
        else
        {
            temp2=temp2->next;
            p=p->next;
        }
    }
    return head;
}
