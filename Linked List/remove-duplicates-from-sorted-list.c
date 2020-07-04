/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *temp,*temp2;
    if(head==NULL)
        return NULL;
    temp=head;
    temp2=head->next;
    while(temp->next!=NULL)
    { 
        if(temp->val==temp2->val)
        {
            temp->next=temp2->next;
            temp2=temp->next;
        }
        else
        {
        temp=temp->next;
        temp2=temp2->next;
        }
    }
    return head;
}
