/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k)
{
    int c=0;
    struct ListNode *temp,*p;
    if(head==NULL||head->next==NULL)
        return head;
    for(temp=head;temp!=NULL;temp=temp->next)
        c++;
    c=k%c;
    for(int i=0;i<c;i++)
    {
        for(temp=head;temp->next->next!=NULL;temp=temp->next){}
        p=temp->next;
        temp->next=NULL;
        p->next=head;
        head=p;
    }
    return head;
}
