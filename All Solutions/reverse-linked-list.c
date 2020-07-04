/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode *p,*q,*r;
    p=head;
    q=p->next;
    r=q->next;
    while(q!=NULL)
    {
        head->next=r;
        q->next=p;
        p=q;
        q=r;
        if(r!=NULL)
            r=r->next;
    }
    head=p;
    return head;
}
