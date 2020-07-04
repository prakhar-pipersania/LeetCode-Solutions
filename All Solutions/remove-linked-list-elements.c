/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *temp;
    if(head==NULL)
        return NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->val==val)
            temp=head=temp->next;
        else if((temp->next)->val==val)
            temp->next=(temp->next)->next;
        else
            temp=temp->next;
    }
    if(head->val==val)
        head=head->next;
    return head;
}
