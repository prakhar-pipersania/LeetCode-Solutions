/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{
    if(head==NULL)
        return false;
    struct ListNode *temp,*temp2;
    temp=head;
    temp2=head;
    while(temp->next!=NULL)
    {
        if(temp->next->next==NULL||temp2->next==NULL||temp2->next->next==NULL)
            return false;
        else if(temp->next==temp2->next->next)
            return true;
        else
        {
            temp=temp->next;
            temp2=temp2->next->next;
        }
    }
    if(temp->next==NULL)
        return false;
    return true;
}
