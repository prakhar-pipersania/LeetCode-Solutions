/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head)
{
    struct ListNode *temp;
    int i=0,val=0;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        val+=(temp->val)*pow(2,i--);
        temp=temp->next;
    }
    val+=(temp->val)*pow(2,i);
    return val;
}
