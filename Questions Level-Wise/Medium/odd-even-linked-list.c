/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode *head2=head->next,*temp1,*temp2;
    for(temp1=head,temp2=head2;temp1->next!=NULL&&temp2->next!=NULL;)
    {
        temp1->next=temp2->next;
        if(temp1->next!=NULL)
            temp1=temp1->next;
        temp2->next=temp1->next;
        if(temp2->next!=NULL)
            temp2=temp2->next;
    }
    temp1->next=head2;
    return head;
}
