/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head)
{
    if(head==NULL||head->next==NULL)
        return true;
    if(head->next->next==NULL)
    {
        if(head->val==head->next->val)
           return true;
        return false;
    } 
    struct ListNode *t,*p,*q,*r,*t1,*t2;
    int i,c=1;
    for(t=head;t->next!=NULL;t=t->next)
        c++;
    for(i=0,t=head;i<c/2;i++)
        t=t->next;
    p=t;
    q=p->next;
    r=q->next;
    while(q!=NULL)
    {
        t->next=r;
        q->next=p;
        p=q;
        q=r;
        if(r!=NULL)
            r=r->next;
    }
    t=p;
    for(t1=head,t2=t;t1->next!=NULL,t2!=NULL;t1=t1->next,t2=t2->next)
    {
        if(t1->val!=t2->val)
            return false;
    }
    return true;
}
