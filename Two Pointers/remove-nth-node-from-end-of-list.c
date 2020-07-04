/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *temp;
    int c=0;
    for(temp=head;temp!=NULL;temp=temp->next)
        c++;
    if(n>=c)
    {
        head=head->next;
        return head;
    }
    for(temp=head;c-n>1;temp=temp->next)
        c--;
    temp->next=temp->next->next;
    return head;
}
